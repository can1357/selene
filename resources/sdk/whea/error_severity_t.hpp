#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [enum _WHEA_ERROR_SEVERITY]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class error_severity_t : int32_t
    {                                    
        recoverable =   0x0,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fatal =         0x1,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        corrected =     0x2,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        informational = 0x3,               // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
