#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPowerIdleStates]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_idle_states_t : int32_t    
    {                                           
        stopped =                       0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started =                       0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_power_up =              0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started_power_failed =          0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled =                      0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        check_io_count =                0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        busy =                          0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        decrement_io =                  0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_timer =                   0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_running =                 0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timing_out =                    0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timed_out =                     0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timed_out_io_increment =        0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timed_out_power_down =          0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timed_out_power_down_failed =   0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        going_to_dx =                   0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_dx =                         0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_dx_io_increment =            0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_dx_power_up_failure =        0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_dx_stopped =                 0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_dx_disabled =                0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_dx_enabled =                 0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_up =                      0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_up_complete =             0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timed_out_disabled =            0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timed_out_enabled =             0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel_timer =                  0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_for_timeout =              0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timer_expired =                 0x1d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabling =                     0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabling_wait_for_timeout =    0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabling_timer_expired =       0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_failed_wait_for_timeout = 0x21,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_failed =                  0x22,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                           0x23,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
