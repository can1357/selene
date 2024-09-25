#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinRTServerInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_win_rt_server_info_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IWinRTServerInfo.$", 0x8, true, 0xc390638262383b45 );
        SDK_FIXED_SIZE( i_win_rt_server_info_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_win_rt_server_info_t, 0x8 );
