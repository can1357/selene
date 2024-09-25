#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MONITOR_DISPLAY_STATE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class monitor_display_state_t : int32_t
    {                                           
        off = 0x0,                                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        on =  0x1,                                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dim = 0x2,                                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
