#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinRTRuntimeClassInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_win_rt_runtime_class_info_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "IWinRTRuntimeClassInfo.$", 0x8, true, 0xcccdbf878cbb3c7a );
        SDK_FIXED_SIZE( i_win_rt_runtime_class_info_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_win_rt_runtime_class_info_t, 0x8 );
