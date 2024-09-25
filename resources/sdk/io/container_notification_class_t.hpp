#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [enum _IO_CONTAINER_NOTIFICATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class container_notification_class_t : int32_t
    {                                                  
        session_state_notification =       0x0,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_container_notification_class = 0x1,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
