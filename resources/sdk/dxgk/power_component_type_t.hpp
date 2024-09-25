#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_POWER_COMPONENT_TYPE]
    //  WDK 10
    //
    enum class power_component_type_t : int32_t
    {                                          
        engine =          0x0,                   // WDK 10
        monitor =         0x1,                   // WDK 10
        monitor_refresh = 0x2,                   // WDK 10
        memory =          0x3,                   // WDK 10
        memory_refresh =  0x4,                   // WDK 10
        other =           0x5,                   // WDK 10
        d3_transition =   0x6,                   // WDK 10
        shared =          0x7,                   // WDK 10
        max =             0x8,                   // WDK 10
    };                                         
};
