#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [enum _WHEA_PFA_REMOVE_TRIGGER]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pfa_remove_trigger_t : int32_t
    {                                        
        error_threshold = 0x1,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timeout =         0x2,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        capacity =        0x3,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
