#pragma once
#include <sdkgen/support_library.hpp>

namespace power
{
    // [enum _POWER_REQUEST_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_type_t : int32_t
    {                                  
        display_required =   0x0,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_required =    0x1,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        away_mode_required = 0x2,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        execution_required = 0x3,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
