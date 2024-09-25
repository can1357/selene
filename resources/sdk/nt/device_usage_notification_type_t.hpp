#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DEVICE_USAGE_NOTIFICATION_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_usage_notification_type_t : int32_t
    {                                                    
        undefined =      0x0,                              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paging =         0x1,                              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hibernation =    0x2,                              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dump_file =      0x3,                              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        boot =           0x4,                              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        post_display =   0x5,                              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        guest_assigned = 0x6,                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
