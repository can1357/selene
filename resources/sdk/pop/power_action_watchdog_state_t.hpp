#pragma once
#include <sdkgen/support_library.hpp>

namespace pop
{
    // [enum _POP_POWER_ACTION_WATCHDOG_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_action_watchdog_state_t : int32_t
    {                                                 
        disabled =      0x0,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        transitioning = 0x1,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resuming =      0x2,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =           0x3,                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
