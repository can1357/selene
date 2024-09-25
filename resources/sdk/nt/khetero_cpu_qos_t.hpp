#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KHETERO_CPU_QOS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class khetero_cpu_qos_t : int32_t
    {                                     
        _default =   0x0,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        high =       0x0,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium =     0x1,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        low =        0x2,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        multimedia = 0x3,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        deadline =   0x4,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dynamic =    0x5,                   // Windows 10 v2004, Windows 10 v20H2
        eco =        0x5,                   // Windows 11
        max =        0x5,                   // Windows 10 v2004, Windows 10 v20H2
        utility =    0x6,                   // Windows 11
        //dynamic =  0x7,                   // Windows 11
        //max =      0x7,                   // Windows 11
    };                                    
};
