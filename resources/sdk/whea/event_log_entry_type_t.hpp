#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [enum _WHEA_EVENT_LOG_ENTRY_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class event_log_entry_type_t : int32_t
    {                                          
        informational = 0x0,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        warning =       0x1,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =         0x2,                     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
