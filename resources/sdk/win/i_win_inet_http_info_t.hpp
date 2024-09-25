#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinInetHttpInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_win_inet_http_info_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IWinInetHttpInfo.$", 0x8, true, 0xf0abd2556f6b88f7 );
        SDK_FIXED_SIZE( i_win_inet_http_info_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_win_inet_http_info_t, 0x8 );
