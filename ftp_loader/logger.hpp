#pragma once

#include <shared_mutex>

enum class msg_type_t: std::uint32_t
{
	LNONE = 0,
	LDEBUG = 9,		/* blue */
	LSUCCESS = 10,	/* green */
	LERROR = 12,	/* red */
	LPROMPT = 11,	/* pink */
	LWARN = 14,		/* yellow */
	LDESIGN = 13,
	LCREDITS = 21
};

inline std::ostream& operator<< ( std::ostream& os, const msg_type_t type )
{
	switch ( type )
	{
	case msg_type_t::LSUCCESS:	return os << ">>";
	case msg_type_t::LDEBUG:	return os << "..";
	case msg_type_t::LWARN:		return os << "**";
	case msg_type_t::LPROMPT:	return os << ">";
	case msg_type_t::LERROR:	return os << "!!";
	case msg_type_t::LDESIGN:	return os << "";
	case msg_type_t::LCREDITS:	return os << "*";
	default: return os << "";
	}
}

class logger
{
private:
	std::shared_timed_mutex mutex{};

public:
	logger( std::string title_name )
	{
		AllocConsole();
		AttachConsole( GetCurrentProcessId() );

		if ( !title_name.empty() )
		{
			SetConsoleTitle( title_name.c_str() );
		}

		FILE* conin{}, * conout{};

		freopen_s( &conin, "conin$", "r", stdin );
		freopen_s( &conout, "conout$", "w", stdout );
		freopen_s( &conout, "conout$", "w", stderr );
	}

	~logger()
	{
		const auto handle = FindWindow( "ConsoleWindowClass", nullptr );
		ShowWindow( handle, SW_HIDE );
		FreeConsole();
	}

	template< typename ... arg >
	void print( const msg_type_t type, const std::string& func, const std::string& format, arg ... a )
	{
		static auto* h_console = GetStdHandle( STD_OUTPUT_HANDLE );
		std::unique_lock<decltype(mutex)> lock( mutex );

		const size_t size = static_cast<size_t>(1) + std::snprintf( nullptr, 0, format.c_str(), a ... );
		const std::unique_ptr<char[]> buf( new char[size] );
		std::snprintf( buf.get(), size, format.c_str(), a ... );
		const auto formated = std::string( buf.get(), buf.get() + size - 1 );
		
		
		if ( type != msg_type_t::LNONE )
		{

			if (type == msg_type_t::LDESIGN)
			{
				SetConsoleTextAttribute(h_console, static_cast<WORD>(type));
				std::cout << "";
				SetConsoleTextAttribute(h_console, 15 /* white */);
			}
			else
			if (type == msg_type_t::LCREDITS)
			{
				SetConsoleTextAttribute(h_console, static_cast<WORD>(type));
				std::cout << "";
				SetConsoleTextAttribute(h_console, 15 /* white */);
			}
			else
			{
				SetConsoleTextAttribute(h_console, static_cast<WORD>(type));
				std::cout << "[";
				std::cout << type;
				std::cout << "] ";

				SetConsoleTextAttribute(h_console, 15 /* white */);
				std::cout << "[ ";

				SetConsoleTextAttribute(h_console, static_cast<WORD>(type));
				std::cout << func;

				SetConsoleTextAttribute(h_console, 15 /* white */);
				std::cout << " ] ";
			}
		}

		if ( type == msg_type_t::LDEBUG )
			SetConsoleTextAttribute( h_console, 8 /* gray */ );
		else
			SetConsoleTextAttribute(h_console, 15 /* white */);
		
		if (type == msg_type_t::LDESIGN)
			SetConsoleTextAttribute(h_console, 13 /* magenta */);

		if (type == msg_type_t::LPROMPT)
			std::cout << formated;
		else
			std::cout << formated << "\n";
	}
};

inline auto g_logger = logger( "-> fuckthepopulation loader" );
#define log_raw(...) g_logger.print( msg_type_t::LNONE, __FUNCTION__, __VA_ARGS__ )
#define log_ok(...) g_logger.print( msg_type_t::LSUCCESS, __FUNCTION__, __VA_ARGS__ )
#define log_debug(...) g_logger.print( msg_type_t::LDEBUG, __FUNCTION__, __VA_ARGS__ )
#define log_warn(...) g_logger.print( msg_type_t::LWARN, __FUNCTION__, __VA_ARGS__ )
#define log_prompt(...) g_logger.print( msg_type_t::LPROMPT, __FUNCTION__, __VA_ARGS__ )
#define log_err(...) g_logger.print( msg_type_t::LERROR, __FUNCTION__, __VA_ARGS__ )
#define log_design(...) g_logger.print( msg_type_t::LDESIGN, __FUNCTION__, __VA_ARGS__ )
#define log_cred(...) g_logger.print( msg_type_t::LCREDITS, __FUNCTION__, __VA_ARGS__ )