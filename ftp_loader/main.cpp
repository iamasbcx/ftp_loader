#include "pch.hpp"
#define _CRT_SECURE_NO_WARNING
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

std::string name = XorStr("FTP LOADER"); // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = XorStr("NRhlRKKPSR"); // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = XorStr("681e987a5fca5513537236479524b5830bd0fed76b32101030d45c1ef5e93cbe"); // app secret, the blurred text on licenses tab and other tabs
std::string version = XorStr("1.0"); // leave alone unless you've changed version on website

//KeyAuth::api KeyAuthApp(name, ownerid, secret, version);


INT WINAPI WinMain( _In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd )
{
	std::atexit([] { std::this_thread::sleep_for(10s); });

	int argc; auto* const argv = CommandLineToArgvW(GetCommandLineW(), &argc);

	const std::filesystem::path dll_path = argv[1] ? argv[1] : L"FTP.dll";

	/*
	std::string name = XorStr("FTP LOADER"); // application name. right above the blurred text aka the secret on the licenses tab among other tabs
	std::string ownerid = XorStr("NRhlRKKPSR"); // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
	std::string secret = XorStr("681e987a5fca5513537236479524b5830bd0fed76b32101030d45c1ef5e93cbe"); // app secret, the blurred text on licenses tab and other tabs
	std::string version = XorStr("1.0"); // leave alone unless you've changed version on website

	KeyAuth::api KeyAuthApp(name, ownerid, secret, version);

	std::cout << XorStr("\n\n Connecting..");
	KeyAuthApp.init();
	system(XorStr("cls").c_str());

	std::cout << XorStr("\n\n [1] Login\n [2] Register\n [3] Upgrade\n [4] License key only\n\n Choose option: ");

	int option;
	std::string username;
	std::string password;
	std::string key;

	std::cin >> option;
	switch (option)
	{
	case 1:
		std::cout << XorStr("\n\n Enter username: ");
		std::cin >> username;
		std::cout << XorStr("\n Enter password: ");
		std::cin >> password;
		KeyAuthApp.login(username, password);
		break;
	case 2:
		std::cout << XorStr("\n\n Enter username: ");
		std::cin >> username;
		std::cout << XorStr("\n Enter password: ");
		std::cin >> password;
		std::cout << XorStr("\n Enter license: ");
		std::cin >> key;
		KeyAuthApp.regstr(username, password, key);
		break;
	case 3:
		std::cout << XorStr("\n\n Enter username: ");
		std::cin >> username;
		std::cout << XorStr("\n Enter license: ");
		std::cin >> key;
		KeyAuthApp.upgrade(username, key);
		break;
	case 4:
		std::cout << XorStr("\n Enter license: ");
		std::cin >> key;
		KeyAuthApp.license(key);
		break;
	default:
		std::cout << XorStr("\n\n Status: Failure: Invalid Selection");
		Sleep(3000);
		exit(0);
	}
	*/
	
	if (!std::filesystem::exists(dll_path))
	{
		log_err("DLL not found! Place a dll file called ZeraCheat.dll in the same folder as the loader, or drag'n'drop the dll into the exe.");
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
	//log_debug("Checking HWID");
	//std::this_thread::sleep_for(500ms);
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