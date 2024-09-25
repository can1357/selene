#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinRTInterfaceInformation]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_win_rt_interface_information_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "IWinRTInterfaceInformation.$", 0x8, true, 0xec6f2345e74ceaa );
        SDK_FIXED_SIZE( i_win_rt_interface_information_t, 0x8 );
    };                                     
};
SDK_VERIFY( struct win::i_win_rt_interface_information_t, 0x8 );