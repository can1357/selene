#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum _HID_POWER_POLICY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_policy_t : int32_t               
    {                                                 
        engine_already_running =               0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdo_unstable =                         0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_open_handle =                       0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_open_handle_initially =             0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_in_connected_standby =          0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitor_dimmed =                       0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitor_dim_exit =                     0x6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitor_off =                          0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitor_on =                           0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_without_pdo_timeout_override =    0x9,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_with_pdo_timeout_override =       0xa,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_disabled =                        0xb,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        suppress_input_in_cs =                 0xc,     // Windows 11
        system_requested_input_suppression =   0xc,     // Windows 10 v2004, Windows 10 v20H2
        client_requested_input_suppression =   0xd,     // Windows 10 v2004, Windows 10 v20H2
        //system_requested_input_suppression = 0xd,     // Windows 11
        //client_requested_input_suppression = 0xe,     // Windows 11
        wake_screen_on_input =                 0xf,     // Windows 11
    };                                                
};
