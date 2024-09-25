#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_DISK_HEALTH_STATUS]
    //  WDK 10
    //
    enum class storage_disk_health_status_t : int32_t
    {                                                
        unknown =   0x0,                               // WDK 10
        unhealthy = 0x1,                               // WDK 10
        warning =   0x2,                               // WDK 10
        healthy =   0x3,                               // WDK 10
        max =       0x4,                               // WDK 10
    };                                               
};
