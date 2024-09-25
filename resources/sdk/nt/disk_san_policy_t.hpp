#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DISK_SAN_POLICY]
    //  WDK 10
    //
    enum class disk_san_policy_t : int32_t
    {                                     
        unknown =          0x0,             // WDK 10
        online =           0x1,             // WDK 10
        offline_shared =   0x2,             // WDK 10
        offline =          0x3,             // WDK 10
        offline_internal = 0x4,             // WDK 10
        max =              0x5,             // WDK 10
    };                                    
};
