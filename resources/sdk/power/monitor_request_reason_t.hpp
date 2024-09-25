#pragma once
#include <sdkgen/support_library.hpp>

namespace power
{
    // [enum POWER_MONITOR_REQUEST_REASON]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class monitor_request_reason_t : int32_t     
    {                                                 
        unknown =                             0x0,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_button =                        0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remote_connection =                   0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sc_monitorpower =                     0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_input =                          0x4,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ac_dc_display_burst =                 0x5,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_display_burst =                  0x6,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        po_set_system_state =                 0x7,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_thread_execution_state =          0x8,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        full_wake =                           0x9,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        session_unlock =                      0xa,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        screen_off_request =                  0xb,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle_timeout =                        0xc,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        policy_change =                       0xd,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleep_button =                        0xe,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lid =                                 0xf,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        battery_count_change =                0x10,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        grace_period =                        0x11,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pn_p =                                0x12,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dp =                                  0x13,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sx_transition =                       0x14,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_idle =                         0x15,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        near_proximity =                      0x16,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        thermal_standby =                     0x17,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume_pdc =                          0x18,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume_s4 =                           0x19,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        terminal =                            0x1a,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdc_signal =                          0x1b,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ac_dc_display_burst_suppressed =      0x1c,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                               0x1c,     // Windows 10 v1607
        system_state_entered =                0x1d,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        winrt =                               0x1e,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_input_keyboard =                 0x1f,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_input_mouse =                    0x20,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_input_touch =                    0x21,     // WDK 10, Windows 10 v2004, Windows 10 v20H2
        user_input_touchpad =                 0x21,     // Windows 11
        user_input_pen =                      0x22,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_input_accelerometer =            0x23,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_input_hid =                      0x24,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_input_po_user_present =          0x25,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_input_session_switch =           0x26,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_input_initialization =           0x27,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdc_signal_windows_mobile_pwr_notif = 0x28,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdc_signal_windows_mobile_shell =     0x29,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdc_signal_hey_cortana =              0x2a,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdc_signal_holographic_shell =        0x2b,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdc_signal_fingerprint =              0x2c,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        directed_drips =                      0x2d,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dim =                                 0x2e,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                               0x2e,     // WDK 10
        builtin_panel =                       0x2f,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_required_un_dim =             0x30,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        battery_count_change_suppressed =     0x31,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume_modern_standby =               0x32,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                                 0x33,     // Windows 10 v2004, Windows 10 v20H2
        terminal_init =                       0x33,     // Windows 11
        pdc_signal_sensors_human_presence =   0x34,     // Windows 11
        battery_pre_critical =                0x35,     // Windows 11
        //user_input_touch =                  0x36,     // Windows 11
        //max =                               0x37,     // Windows 11
    };                                                
};
