#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _TIMER_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class timer_type_t : int32_t  
    {                                  
        notification_timer =    0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronization_timer = 0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
