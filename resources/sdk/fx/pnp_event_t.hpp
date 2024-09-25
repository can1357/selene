#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPnpEvent]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pnp_event_t : int32_t                  
    {                                                 
        event_invalid =                   0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_add_device =                0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_start_device =              0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_start_device_complete =     0x4,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_start_device_failed =       0x8,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_query_remove =              0x10,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_query_stop =                0x20,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_cancel_remove =             0x40,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_cancel_stop =               0x80,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_null =                      0xff,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_stop =                      0x100,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_remove =                    0x200,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_surprise_remove =           0x400,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_eject =                     0x800,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_pending =                   0xdf4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_pwr_pol_stopped =           0x1000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_pwr_pol_stop_failed =       0x2000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_power_up_failed =           0x4000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_power_down_failed =         0x8000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_parent_removed =            0x10000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_children_removal_complete = 0x20000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_pwr_pol_started =           0x40000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_pwr_pol_start_failed =      0x80000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_device_in_d0 =              0x100000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_pwr_pol_removed =           0x200000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        priority_events_mask =            0x3c3000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
