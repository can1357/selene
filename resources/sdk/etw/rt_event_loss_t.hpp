#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum _ETW_RT_EVENT_LOSS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rt_event_loss_t : int32_t
    {                                   
        event_no_loss =  0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_lost =     0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        buffer_lost =    0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        backup_lost =    0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_loss_max = 0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
