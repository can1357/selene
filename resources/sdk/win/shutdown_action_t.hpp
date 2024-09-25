#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SHUTDOWN_ACTION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class shutdown_action_t : int32_t
    {                                     
        no_reboot =           0x0,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reboot =              0x1,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_off =           0x2,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reboot_for_recovery = 0x3,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
