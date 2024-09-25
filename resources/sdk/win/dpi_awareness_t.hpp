#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DPI_AWARENESS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dpi_awareness_t : int32_t
    {                                   
        //invalid =         -0x1,         // WDK 10
        unaware =           0x0,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_aware =      0x1,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        per_monitor_aware = 0x2,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =           0xff,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
