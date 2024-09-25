#pragma once
#include <string>
#include <string_view>
#pragma comment(lib, "dbghelp.lib")

#define UNDNAME_NO_MS_KEYWORDS 0x2
#define UNDNAME_NAME_ONLY      0x1000

extern "C" __declspec( dllimport ) uint32_t __cdecl UnDecorateSymbolName(
	const char* name,
	char* out,
	uint32_t max_len,
	uint32_t flags
);

namespace util
{
	inline std::string undecorate_name( const char* name )
	{
		if ( *name != '?' )
			return {};

		// Try UnDecorateSymbolName.
		//
		std::string result = {};
		while ( result.size() < 1_mb )
		{
			result.resize( result.size() * 2 + 15 );
			if ( size_t len = UnDecorateSymbolName( name, result.data(), result.size() + 1, UNDNAME_NAME_ONLY | UNDNAME_NO_MS_KEYWORDS ); len < ( result.size() - 2 ) )
			{
				result.resize( len );
				return result;
			}
		}
		return {};
	}
};