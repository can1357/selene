#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPowerPolicyEvent]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_policy_event_t : int32_t                      
    {                                                              
        pwr_pol_invalid =                            0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_start =                              0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_stop =                               0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_sx =                                 0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_s0 =                                 0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_power_down =                         0x10,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_power_up =                           0x20,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_power_down_io_stopped =              0x40,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_power_up_hw_started =                0x80,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_null =                               0xff,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_wake_arrived =                       0x100,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_wake_success =                       0x200,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_wake_failed =                        0x400,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_io_present =                         0x800,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_power_timeout_expired =              0x1000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_s0_idle_policy_changed =             0x2000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_surprise_remove =                    0x4000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_usb_selective_suspend_callback =     0x8000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_usb_selective_suspend_completed =    0x10000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_power_down_failed =                  0x20000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_power_up_failed =                    0x40000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_not_owner_priority_events_mask =     0x60030,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_implicit_power_down =                0x80000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_implicit_power_down_failed =         0x100000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_power_up_not_seen =                  0x200000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_device_power_not_required =          0x400000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_device_power_required =              0x800000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_remove =                             0x1000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_wake_interrupt_fired =               0x2000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_pol_singular_event_mask =              0x2002000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //pwr_pol_priority_events_mask =             0x23f07f0,      // Windows 10 v1607
        pwr_pol_device_directed_power_down =         0x4000000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_device_directed_power_up =           0x8000000,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_device_power_not_required_directed = 0x10000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_device_power_required_directed =     0x20000000,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwr_pol_priority_events_mask =               0x3a3f07f0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                             
};
