#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_EVENT_TYPE]
    //  WDK 10
    //
    enum class event_type_t : int32_t
    {                                
        undefined_event =    0x0,      // WDK 10
        acpi_event =         0x1,      // WDK 10
        power_state_event =  0x2,      // WDK 10
        docking_event =      0x3,      // WDK 10
        chained_acpi_event = 0x4,      // WDK 10
    };                               
};
