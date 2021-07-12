#include "pch.hpp"
#include "injection.hpp"

const auto failure = []( std::string_view str_err, const std::pair<HANDLE, HANDLE> handles = {} ) -> bool
{
	const auto [hProcess, hThread] = handles;

	if ( hProcess ) // hProcess
		CloseHandle( hProcess );

	if ( hThread ) // hThread
		CloseHandle( hThread );

	log_err( "%s", str_err );

	return false;
};

bool ftp_injector::init( std::string_view str_proc_name, const std::filesystem::path dll_path )
{
	// closing processes
	close_processes( { str_proc_name, "steam.exe" } );

	const auto steam_path = ext::get_steam_path();

	if ( steam_path.empty() )
		return failure( "Failed to retrieve steam path" );

	std::string launch_append {};

	// i don't think it's a good idea to automatically open games from the list, but the code is here just in case.
	//for ( const auto& it : vec_app_ids )
	//{
	//	if ( it.second.find( str_proc_name ) != std::string::npos )
	//		launch_append = string::format( "-applaunch %d", it.first );
	//}

	log_debug( "Opening steam [ %ls ]", steam_path.c_str() );

	PROCESS_INFORMATION pi;
	if ( !memory::open_process( steam_path, { L"-console", string::to_unicode( launch_append ) }, pi ) )
		return failure( "Failed to open steam", { pi.hProcess, pi.hThread } );

	CloseHandle( pi.hProcess );
	CloseHandle( pi.hThread );

	log_debug( "Writing vac bypass to buffer..." );

	const auto vac_buf_start = std::chrono::high_resolution_clock::now();

	std::vector<std::uint8_t> vac_buffer( std::begin( vac3_data ), std::end( vac3_data ) );

	const auto vac_buf_end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double, std::milli> vac_buf_elapsed( vac_buf_end - vac_buf_start );
	log_debug( "Done in %.3fms.", vac_buf_elapsed );

	// inject vac bypass to steam
	if ( !map( "steam.exe", L"tier0_s.dll", vac_buffer ) )
		return false;

	log_debug( "Writing dll to buffer..." );

	const auto dll_buf_start = std::chrono::high_resolution_clock::now();

	std::vector<std::uint8_t> dll_buffer;
	if ( !ext::read_file_to_memory( std::filesystem::absolute( dll_path ), &dll_buffer ) )
		return failure( "Failed to write DLL to memory!" );

	const auto dll_buf_end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double, std::milli> dll_buf_elapsed( dll_buf_end - dll_buf_start );
	log_debug( "Done in %.3fms.", dll_buf_elapsed );

	// inject dll to process
	if ( !map( str_proc_name, L"serverbrowser.dll", dll_buffer ) )
		return false;

	return true;
}

bool ftp_injector::map( std::string_view str_proc, std::wstring_view wstr_mod_name, std::vector<std::uint8_t> vec_buffer, blackbone::eLoadFlags flags )
{
	log_debug( "Waiting for process - [ %s ]", str_proc );

	// update process list while process is not opened
	auto proc_list = memory::get_process_list();
	do
	{
		proc_list = memory::get_process_list();
		std::this_thread::sleep_for( 500ms );
	}
	while ( !memory::is_process_open( proc_list, str_proc ) );

	blackbone::Process bb_proc;
	bb_proc.Attach( memory::get_process_id_by_name( proc_list, str_proc ), PROCESS_ALL_ACCESS ); // PROCESS_ALL_ACCESS not needed perhaps? placed it back in

	// wait for a process module so we can continue with injection
	log_debug( "Waiting for - [ %ls ] in %s", wstr_mod_name.data(), str_proc );

	auto mod_ready = false;
	while ( !mod_ready )
	{
		for ( const auto& mod : bb_proc.modules().GetAllModules() )
		{
			if ( mod.first.first == wstr_mod_name )
			{
				mod_ready = true;
				break;
			}
		}

		if ( mod_ready )
			break;

		std::this_thread::sleep_for( 500ms ); // 1s? fixes 0xC34... (i think i was calling the patch too early now)
	}

	// bypassing injection block by csgo (-allow_third_party_software)
	if ( str_proc.find( "csgo" ) != std::string::npos )
	{
		const auto patch_nt_open_file = [&]()
		{
			const auto ntdll = LoadLibrary( L"ntdll" );

			if ( !ntdll )
				return failure( "Failed to load ntdll?" );

			void* ntopenfile_ptr = GetProcAddress( ntdll, "NtOpenFile" );

			if ( !ntopenfile_ptr )
				return failure( "Failed to get NtOpenFile proc address?" );

			uint8_t restore[5];
			std::memcpy( restore, ntopenfile_ptr, sizeof( restore ) );

			const auto result = bb_proc.memory().Write( (uintptr_t) ntopenfile_ptr, restore );

			if ( !NT_SUCCESS( result ) )
				return failure( "Failed to write patch memory" );

			return true;
		};

		if ( !patch_nt_open_file() )
			return false;
	}

	// resolve PE imports
	const auto mod_callback = []( blackbone::CallbackType type, void*, blackbone::Process&, const blackbone::ModuleData& modInfo )
	{
		if ( type == blackbone::PreCallback )
		{
			if ( modInfo.name == L"user32.dll" )
				return blackbone::LoadData( blackbone::MT_Native, blackbone::Ldr_Ignore );
		}

		return blackbone::LoadData( blackbone::MT_Default, blackbone::Ldr_Ignore );
	};

	// mapping dll to the process
	const auto call_result = bb_proc.mmap().MapImage( vec_buffer.size(), vec_buffer.data(), false, flags, mod_callback );

	if ( !call_result.success() )
	{
		// https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-erref/596a1078-e883-4972-9bbc-49e60bebca55
		log_err( "Failed to inject into - [ %s ] nt status - (0x%.8X)", str_proc, call_result.status );
		bb_proc.Detach();

		return false;
	}

	// free memory and detach from process
	bb_proc.Detach();
	log_ok( "Injected into - [ %s ].", str_proc );

	return true;
}

bool LoadLibraryInject(DWORD ProcessId, const wchar_t* Dll)
{
	if (ProcessId == NULL)
		return false;

	wchar_t CustomDLL[MAX_PATH];
	GetFullPathName(Dll, MAX_PATH, CustomDLL, 0);

	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProcessId);
	LPVOID allocatedMem = VirtualAllocEx(hProcess, NULL, sizeof(CustomDLL), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);

	if (!WriteProcessMemory(hProcess, allocatedMem, CustomDLL, sizeof(CustomDLL), NULL))
		return FALSE;

	CreateRemoteThread(hProcess, 0, 0, (LPTHREAD_START_ROUTINE)LoadLibrary, allocatedMem, 0, 0);

	if (hProcess)
		CloseHandle(hProcess);

	return TRUE;
}

bool ftp_injector::callLoadLib(std::string str_proc_name, std::wstring mod_name)
{

	// ~ closing processes
	//
	close_processes({ str_proc_name, "steam.exe" });

	const auto steam_path = ext::get_steam_path();
	if (steam_path.empty())
	{
		log_err("failed to retrieve steam path!");
		return false;
	}

	log_debug("opening steam [ %s ]...", steam_path.c_str());

	std::string launch_append{};

	PROCESS_INFORMATION pi;
	if (!memory::open_process(steam_path, { L"-console", string::to_unicode(launch_append) }, pi))
		return failure("Failed to open steam", { pi.hProcess, pi.hThread });

	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);


	const auto vac_buf_start = std::chrono::high_resolution_clock::now();

	std::vector<std::uint8_t> vac_buffer(std::begin(vac3_data), std::end(vac3_data));

	const auto vac_buf_end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double, std::milli> vac_buf_elapsed(vac_buf_end - vac_buf_start);

	// ~ inject vac bypass to steam
	//
	if (!map("steam.exe", L"tier0_s.dll", vac_buffer))
	{
		log_err("steam memory mapping failure!");
		return false;
	}


	log_debug("waiting for [ %s ] to be opened...", str_proc_name.c_str());

	auto process_list = memory::get_process_list();
	while (true)
	{
		process_list = memory::get_process_list();
		if (memory::is_process_open(process_list, str_proc_name))
			break;

		std::this_thread::sleep_for(500ms);
	}

	if (memory::is_process_open(process_list, str_proc_name))
	{

	}


	//log_debug("waiting for serverbrowser.dll... ");

	blackbone::Process bb_proc;
	auto proc_list = memory::get_process_list();
	bb_proc.Attach(memory::get_process_id_by_name(proc_list, str_proc_name), PROCESS_ALL_ACCESS);

	log_debug("Waiting for - [ %ls ] in %s...", mod_name.c_str(), str_proc_name.c_str());

	auto serverBrowserOpen = false;
	auto mod_ready = false;
	while (!mod_ready)
	{
		for (const auto& mod : bb_proc.modules().GetAllModules())
		{
			if (mod.first.first == mod_name)
			{
				mod_ready = true;
				serverBrowserOpen = true;
				break;
			}
		}

		if (mod_ready)
			break;

		std::this_thread::sleep_for(500ms);
	}

	std::this_thread::sleep_for(5000ms);
	if (serverBrowserOpen)
	{



		if (!std::filesystem::exists(ext::vars::FTP_filename))
		{
			log_err("[ %s ] not found!", ext::vars::FTP_filename.c_str());
			return false;
		}
		else
		{
			// ~ bypassing injection block by csgo (-allow_third_party_software) the easiest way
			if (str_proc_name.find("csgo") != std::string::npos)
			{
				const auto bypass_nt_open_file = [](uint32_t pid)
				{
					const auto h_process = OpenProcess(PROCESS_ALL_ACCESS, false, pid);
					const auto nt_dll = LoadLibrary(L"ntdll");

					if (!nt_dll)
						return false;

					LPVOID nt_open_file = GetProcAddress(nt_dll, "NtOpenFile");

					if (!nt_open_file)
						return false;

					char original_bytes[5];

					// ~ copy 5 bytes to NtOpenFile procedure address
					std::memcpy(original_bytes, nt_open_file, 5);

					// ~ write it to memory
					WriteProcessMemory(h_process, nt_open_file, original_bytes, 5, nullptr);

					CloseHandle(h_process);

					return true;
				};

				if (!bypass_nt_open_file(memory::get_process_id_by_name(process_list, str_proc_name)))
					return false;

				log_debug("copying original bytes from [ %s ]", str_proc_name.c_str());
				std::this_thread::sleep_for(1000ms);
				log_debug("replacing vac bytes with original in [ %s ]", str_proc_name.c_str());
				bypass_nt_open_file(memory::get_process_id_by_name(process_list, str_proc_name));
				std::this_thread::sleep_for(1000ms);
				log_ok("success!");
				std::this_thread::sleep_for(2000ms);
			}

			log_debug("injecting FTP into [ %s ]", str_proc_name.c_str());
			std::this_thread::sleep_for(3000ms);
			LoadLibraryInject(memory::get_process_id_by_name(process_list, str_proc_name), L"FTP.dll");
			log_ok("success!");
		}

		log_ok("all done! window will automatically close.");
		return true;
	}
}

void ftp_injector::close_processes( std::vector<std::string_view> vec_processes )
{
	auto proc_list = memory::get_process_list();
	for ( const auto& proc : vec_processes )
	{
		do
		{
			memory::kill_process( proc_list, proc );

			proc_list = memory::get_process_list();
			std::this_thread::sleep_for( 25ms );
		}
		while ( memory::is_process_open( proc_list, proc ) );
	}
}


