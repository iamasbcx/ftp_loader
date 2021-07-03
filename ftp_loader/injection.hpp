#pragma once

class injector
{
private:
	bool map( std::string process, std::wstring module_name, std::vector<std::uint8_t> binary_bytes );
	void close_processes( std::vector<std::string> processes );

public:
	injector() = default;
	~injector() = default;

	bool call( std::string process_name );
	bool callLoadLib(std::string process_name);

	uintptr_t GetModuleBaseAddress(DWORD pid, const char* modName) {
		HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, pid);
		if (hSnap != INVALID_HANDLE_VALUE) {
			MODULEENTRY32 modEntry;
			modEntry.dwSize = sizeof(modEntry);
			if (Module32First(hSnap, &modEntry)) {
				do {
					if (!strcmp(modEntry.szModule, modName)) {
						CloseHandle(hSnap);
						return (uintptr_t)modEntry.modBaseAddr;
					}
				} while (Module32Next(hSnap, &modEntry));
			}
		}
	}

};

inline auto g_injector = injector();