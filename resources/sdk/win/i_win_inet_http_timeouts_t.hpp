#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinInetHttpTimeouts]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_win_inet_http_timeouts_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IWinInetHttpTimeouts.$", 0x8, true, 0x33eccbe16fe0f097 );
        SDK_FIXED_SIZE( i_win_inet_http_timeouts_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_win_inet_http_timeouts_t, 0x8 );
