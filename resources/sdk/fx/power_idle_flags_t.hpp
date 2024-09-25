#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPowerIdleFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_idle_flags_t : int32_t
    {                                      
        timer_enabled =           0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_dx =                   0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_canceled =          0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_started =           0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_failed =            0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_started =              0x20,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_present_sent =         0x40,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        send_pnp_power_up_event = 0x80,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
