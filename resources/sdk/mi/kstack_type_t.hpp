#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_KSTACK_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kstack_type_t : int32_t
    {                                 
        regular_kstack =       0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        short_lived_kstack =   0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_kstack =       0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        x_state_state_kstack = 0x2,     // Windows 11
        //maximum_kstack =     0x3,     // Windows 11
    };                                
};
