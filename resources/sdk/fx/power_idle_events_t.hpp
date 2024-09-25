#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPowerIdleEvents]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_idle_events_t : int32_t
    {                                       
        null =                    0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_power_up_failed =   0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_power_up_complete = 0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_power_down =        0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_power_down_failed = 0x10,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_timer_expired =     0x20,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_enabled =           0x40,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_disabled =          0x80,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_io_decrement =      0x100,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_io_increment =      0x200,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_start =             0x400,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_stop =              0x800,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
