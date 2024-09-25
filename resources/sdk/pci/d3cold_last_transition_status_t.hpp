#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _D3COLD_LAST_TRANSITION_STATUS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class d3cold_last_transition_status_t : int32_t
    {                                                   
        status_unknown = 0x0,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d3hot =          0x1,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d3cold =         0x2,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
