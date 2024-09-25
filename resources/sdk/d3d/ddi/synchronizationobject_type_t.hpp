#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum _D3DDDI_SYNCHRONIZATIONOBJECT_TYPE]
    //  WDK 10
    //
    enum class synchronizationobject_type_t : int32_t
    {                                                
        synchronization_mutex =      0x1,              // WDK 10
        semaphore =                  0x2,              // WDK 10
        fence =                      0x3,              // WDK 10
        cpu_notification =           0x4,              // WDK 10
        monitored_fence =            0x5,              // WDK 10
        periodic_monitored_fence =   0x6,              // WDK 10
        synchronization_type_limit = 0x7,              // WDK 10
    };                                               
};
