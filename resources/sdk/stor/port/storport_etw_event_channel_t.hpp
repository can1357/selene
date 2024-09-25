#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STORPORT_ETW_EVENT_CHANNEL]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class storport_etw_event_channel_t : int32_t
    {                                                
        diagnostic =  0x0,                             // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        operational = 0x1,                             // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        health =      0x2,                             // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
