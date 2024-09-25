#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [enum _IO_NOTIFICATION_EVENT_CATEGORY]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class notification_event_category_t : int32_t
    {                                                 
        reserved =                0x0,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hardware_profile_change = 0x1,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_interface_change = 0x2,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_device_change =    0x3,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        kernel_soft_restart =     0x4,                  // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
