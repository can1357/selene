#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagEventLogModes]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class event_log_modes_t : int32_t
    {                                     
        eventlog_mode_launch =     0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_log_mode_activate =  0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_log_mode_access =    0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_log_mode_dont_care = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
