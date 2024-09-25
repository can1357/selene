#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_DISK_OPERATIONAL_STATUS]
    //  WDK 10
    //
    enum class storage_disk_operational_status_t : int32_t
    {                                                     
        none =               0x0,                           // WDK 10
        unknown =            0x1,                           // WDK 10
        ok =                 0x2,                           // WDK 10
        predicting_failure = 0x3,                           // WDK 10
        in_service =         0x4,                           // WDK 10
        hardware_error =     0x5,                           // WDK 10
        not_usable =         0x6,                           // WDK 10
        transient_error =    0x7,                           // WDK 10
        missing =            0x8,                           // WDK 10
    };                                                    
};
