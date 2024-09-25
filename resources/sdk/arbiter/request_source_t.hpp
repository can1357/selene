#pragma once
#include <sdkgen/support_library.hpp>

namespace arbiter
{
    // [enum _ARBITER_REQUEST_SOURCE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_source_t : int32_t
    {                                    
        //undefined =     -0x1,            // WDK 10
        legacy_reported = 0x0,             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hal_reported =    0x1,             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        legacy_assigned = 0x2,             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnp_detected =    0x3,             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnp_enumerated =  0x4,             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        undefined =       0xff,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
