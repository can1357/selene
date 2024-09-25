#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [enum _WHEA_CPU_VENDOR]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cpu_vendor_t : int32_t
    {                                
        other = 0x0,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        intel = 0x1,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        amd =   0x2,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
