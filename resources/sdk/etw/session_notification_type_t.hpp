#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum _ETW_SESSION_NOTIFICATION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class session_notification_type_t : int32_t
    {                                               
        media_changed =      0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        session_terminated = 0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        logfile_error =      0x3,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        realtime_error =     0x4,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        session_started =    0x5,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                0x6,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
