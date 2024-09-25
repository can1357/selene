#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinRTActivationProperties]
    // => Windows 10 v1607
    //
    struct i_win_rt_activation_properties_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "IWinRTActivationProperties.$", 0x0, false, 0xa1d3d15ed50e4fd8 );
        SDK_FIXED_SIZE( i_win_rt_activation_properties_t, 0x8 );
    };                                     
};
SDK_VERIFY( struct win::i_win_rt_activation_properties_t, 0x8 );
