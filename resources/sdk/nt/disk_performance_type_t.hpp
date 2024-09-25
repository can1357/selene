#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DISK_PERFORMANCE_TYPE]
    //  WDK 10
    //
    enum class disk_performance_type_t : int32_t
    {                                           
        all_priority =     0x0,                   // WDK 10
        non_low_priority = 0x1,                   // WDK 10
        max =              0x2,                   // WDK 10
    };                                          
};
