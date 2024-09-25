#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _BOUND_CALLBACK_STATUS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bound_callback_status_t : int32_t
    {                                           
        continue_search = 0x0,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        handled =         0x1,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =           0x2,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =         0x3,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
