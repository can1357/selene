#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinInetCacheHints2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_win_inet_cache_hints2_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IWinInetCacheHints2.$", 0x8, true, 0xdb10d9a263f234f );
        SDK_FIXED_SIZE( i_win_inet_cache_hints2_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_win_inet_cache_hints2_t, 0x8 );
