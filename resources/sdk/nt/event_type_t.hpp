#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _EVENT_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class event_type_t : int32_t  
    {                                  
        notification_event =    0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronization_event = 0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
