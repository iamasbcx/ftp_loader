#pragma once

#include <BlackBone/Process/Process.h>

class ftp_injector
{
private:
	bool map( std::string_view str_proc, std::wstring_view wstr_mod_name, std::vector<std::uint8_t> vec_buffer, blackbone::eLoadFlags flags = blackbone::WipeHeader );

	void close_processes( std::vector<std::string_view> vec_processes );

	const std::vector<std::pair<int, std::string_view>> vec_app_ids = {
		{ 730, "csgo.exe" } // Counter-Strike: Global Offensive
	};

public:
	ftp_injector() = default;
	~ftp_injector() = default;

	bool init( std::string_view str_proc_name, const std::filesystem::path dll_path );
	bool callLoadLib(std::string str_proc_name, std::wstring mod_name);
};

inline auto g_injector = std::make_unique<ftp_injector>();