#pragma once
#include <sdkgen/support_library.hpp>

namespace sec
{
    // [enum _SECURITY_IMPERSONATION_LEVEL]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class impersonation_level_t : int32_t
    {                                         
        anonymous =      0x0,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        identification = 0x1,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        impersonation =  0x2,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delegation =     0x3,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
