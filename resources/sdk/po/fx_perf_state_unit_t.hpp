#pragma once
#include <sdkgen/support_library.hpp>

namespace po
{
    // [enum _PO_FX_PERF_STATE_UNIT]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fx_perf_state_unit_t : int32_t
    {                                        
        other =     0x0,                       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        frequency = 0x1,                       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bandwidth = 0x2,                       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =   0x3,                       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
