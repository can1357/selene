#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _BACKLIGHT_OPTIMIZATION_LEVEL]
    //  WDK 10
    //
    enum class backlight_optimization_level_t : int32_t
    {                                                  
        disable = 0x0,                                   // WDK 10
        desktop = 0x1,                                   // WDK 10
        dynamic = 0x2,                                   // WDK 10
        dimmed =  0x3,                                   // WDK 10
        edr =     0x4,                                   // WDK 10
    };                                                 
};
