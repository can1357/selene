#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComWinRTActivationProperties]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_com_win_rt_activation_properties_t
    {                                          
                                               
        SDK_MAGIC_PROPERTIES( "IComWinRTActivationProperties.$", 0x8, true, 0xde7f0cc3d583b3de );
        SDK_FIXED_SIZE( i_com_win_rt_activation_properties_t, 0x8 );
    };                                         
};
SDK_VERIFY( struct win::i_com_win_rt_activation_properties_t, 0x8 );
