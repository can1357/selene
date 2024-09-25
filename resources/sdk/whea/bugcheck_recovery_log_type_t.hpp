#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [enum _WHEA_BUGCHECK_RECOVERY_LOG_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bugcheck_recovery_log_type_t : int32_t
    {                                                
        entry =   0x0,                                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _return = 0x1,                                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =     0x2,                                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
