#pragma once
#include <sdkgen/support_library.hpp>

namespace power
{
    // [enum _POWER_STATE_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class state_type_t : int32_t
    {                                
        system_power_state = 0x0,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_power_state = 0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
