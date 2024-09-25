#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinRTClassActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_win_rt_class_activator_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IWinRTClassActivator.$", 0x8, true, 0xfe7efbd169730751 );
        SDK_FIXED_SIZE( i_win_rt_class_activator_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_win_rt_class_activator_t, 0x8 );
