#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KHETERO_CPU_POLICY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class khetero_cpu_policy_t : int32_t
    {                                        
        all =           0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        large =         0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        large_or_idle = 0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        small =         0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        small_or_idle = 0x4,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic =       0x5,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        static_max =    0x5,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        biased_small =  0x6,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        biased_large =  0x7,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _default =      0x8,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =           0x9,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
