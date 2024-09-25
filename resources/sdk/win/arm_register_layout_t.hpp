#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class ArmRegisterLayout]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class arm_register_layout_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "ArmRegisterLayout.$", 0x8, true, 0xa072ec6f580c4c1a );
        SDK_FIXED_SIZE( arm_register_layout_t, 0x8 );
    };                         
};
SDK_VERIFY( class win::arm_register_layout_t, 0x8 );
