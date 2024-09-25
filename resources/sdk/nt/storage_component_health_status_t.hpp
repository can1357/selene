#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_COMPONENT_HEALTH_STATUS]
    //  WDK 10
    //
    enum class storage_component_health_status_t : int32_t
    {                                                     
        unknown =   0x0,                                    // WDK 10
        normal =    0x1,                                    // WDK 10
        throttled = 0x2,                                    // WDK 10
        warning =   0x3,                                    // WDK 10
        disabled =  0x4,                                    // WDK 10
        failed =    0x5,                                    // WDK 10
    };                                                    
};
