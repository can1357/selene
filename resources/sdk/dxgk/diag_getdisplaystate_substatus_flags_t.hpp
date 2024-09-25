#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_GETDISPLAYSTATE_SUBSTATUS_FLAGS]
    //  WDK 10
    //
    enum class diag_getdisplaystate_substatus_flags_t : int32_t
    {                                                          
        success =                 0x0,                           // WDK 10
        caused_glitch =           0x1,                           // WDK 10
        changed_display_state =   0x2,                           // WDK 10
        monitor_not_connected =   0x4,                           // WDK 10
        timeout =                 0x8,                           // WDK 10
        error_hardware =          0x10,                          // WDK 10
        error_driver =            0x20,                          // WDK 10
        vidpntargetid_not_found = 0x40,                          // WDK 10
    };                                                         
};
