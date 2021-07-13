#include "pch.hpp"

INT WINAPI WinMain( _In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd )
{
	std::atexit( [] { std::this_thread::sleep_for( 10s ); } );

	int argc; auto* const argv = CommandLineToArgvW( GetCommandLineW(), &argc );

	const std::filesystem::path dll_path = argv[1] ? argv[1] : L"FTP.dll";


	if ( !std::filesystem::exists( dll_path ) )
	{
		log_err( "DLL not found! Place a dll file called FTP.dll in the same folder as the loader, or drag'n'drop the dll into the exe." );
		return EXIT_FAILURE;
	}

	std::string str_proc_name;
	std::string methhead;
	std::string returnLib;
	log_design(" _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ __    _____ _____ _____ _____ _____ ");
	log_design("|   __|  |  |     |  |  |_   _|  |  |   __|  _  |     |  _  |  |  |  |  |  _  |_   _|     |     |   | |");
	log_design("|   __|  |  |   --|    -| | | |     |   __|   __|  |  |   __|  |  |  |__|     | | | |-   -|  |  | | | |");
	log_design("|__|  |_____|_____|__|__| |_| |__|__|_____|__|  |_____|__|  |_____|_____|__|__| |_| |_____|_____|_|___|");
	std::cout << "~ developed by n0verify and b1scoito. Thank you DarthTon for making BlackBone memory hacking library." << std::endl;
	log_raw("DLL path - [ %s ]", std::filesystem::absolute(dll_path).string().c_str());
	log_debug("1 ) LoadLibrary");
	log_debug("2 ) ManualMap");
	log_prompt("Injection Method: ");
	std::cin >> methhead;
	std::cin.clear();
	log_design("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	log_prompt("Type csgo to start injection: ");
	std::cin >> str_proc_name;
	std::cin.clear();
	log_design("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

	if (methhead == "1" | methhead == "loadlibrary" | methhead == "LoadLibrary" | methhead == "ll")  // this function will inject vac3 bypass on steam and the dll on the target process
	{
		log_debug("Injecting VAC bypass module into Steam");
		if (!g_injector->callLoadLib(str_proc_name, L"serverbrowser.dll"))
		{
			return EXIT_FAILURE;
		}

		log_ok("Done. Window will close automatically.");
		return EXIT_SUCCESS;
	}
	else if (methhead == "2" | methhead == "manualmap" | methhead == "ManualMap" | methhead == "mm")  // this function will inject vac3 bypass on steam and the dll on the target process
	{
		log_debug("Injecting VAC bypass module into Steam");
		if (!g_injector->init(str_proc_name, dll_path))
			return EXIT_FAILURE;

		log_ok("Done. Window will close automatically.");
		return EXIT_SUCCESS;
	}
}