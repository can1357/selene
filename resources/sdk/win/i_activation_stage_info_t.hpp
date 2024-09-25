#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IActivationStageInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_activation_stage_info_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IActivationStageInfo.$", 0x8, true, 0x7e71290cc9ca51d7 );
        SDK_FIXED_SIZE( i_activation_stage_info_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_activation_stage_info_t, 0x8 );
