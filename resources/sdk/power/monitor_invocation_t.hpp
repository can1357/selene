#pragma once
#include <sdkgen/support_library.hpp>
#include "monitor_request_reason_t.hpp"

#include "magic/monitor_invocation_t.start.hpp"
namespace power
{
    // [struct _POWER_MONITOR_INVOCATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct monitor_invocation_t                                          
    {                                                                    
        enum class u0_request_reason_t : int32_t                         
        {                                                                
            unknown =                             0x0,                     // WDK 10
            power_button =                        0x1,                     // WDK 10
            remote_connection =                   0x2,                     // WDK 10
            sc_monitorpower =                     0x3,                     // WDK 10
            user_input =                          0x4,                     // WDK 10
            ac_dc_display_burst =                 0x5,                     // WDK 10
            user_display_burst =                  0x6,                     // WDK 10
            po_set_system_state =                 0x7,                     // WDK 10
            set_thread_execution_state =          0x8,                     // WDK 10
            full_wake =                           0x9,                     // WDK 10
            session_unlock =                      0xa,                     // WDK 10
            screen_off_request =                  0xb,                     // WDK 10
            idle_timeout =                        0xc,                     // WDK 10
            policy_change =                       0xd,                     // WDK 10
            sleep_button =                        0xe,                     // WDK 10
            lid =                                 0xf,                     // WDK 10
            battery_count_change =                0x10,                    // WDK 10
            grace_period =                        0x11,                    // WDK 10
            pn_p =                                0x12,                    // WDK 10
            dp =                                  0x13,                    // WDK 10
            sx_transition =                       0x14,                    // WDK 10
            system_idle =                         0x15,                    // WDK 10
            near_proximity =                      0x16,                    // WDK 10
            thermal_standby =                     0x17,                    // WDK 10
            resume_pdc =                          0x18,                    // WDK 10
            resume_s4 =                           0x19,                    // WDK 10
            terminal =                            0x1a,                    // WDK 10
            pdc_signal =                          0x1b,                    // WDK 10
            ac_dc_display_burst_suppressed =      0x1c,                    // WDK 10
            system_state_entered =                0x1d,                    // WDK 10
            winrt =                               0x1e,                    // WDK 10
            user_input_keyboard =                 0x1f,                    // WDK 10
            user_input_mouse =                    0x20,                    // WDK 10
            user_input_touch =                    0x21,                    // WDK 10
            user_input_pen =                      0x22,                    // WDK 10
            user_input_accelerometer =            0x23,                    // WDK 10
            user_input_hid =                      0x24,                    // WDK 10
            user_input_po_user_present =          0x25,                    // WDK 10
            user_input_session_switch =           0x26,                    // WDK 10
            user_input_initialization =           0x27,                    // WDK 10
            pdc_signal_windows_mobile_pwr_notif = 0x28,                    // WDK 10
            pdc_signal_windows_mobile_shell =     0x29,                    // WDK 10
            pdc_signal_hey_cortana =              0x2a,                    // WDK 10
            pdc_signal_holographic_shell =        0x2b,                    // WDK 10
            pdc_signal_fingerprint =              0x2c,                    // WDK 10
            directed_drips =                      0x2d,                    // WDK 10
            dim =                                 0x2e,                    // WDK 10
            builtin_panel =                       0x2f,                    // WDK 10
            display_required_un_dim =             0x30,                    // WDK 10
            battery_count_change_suppressed =     0x31,                    // WDK 10
            resume_modern_standby =               0x32,                    // WDK 10
            max =                                 0x33,                    // WDK 10
        };                                                               
                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                               
        _m00 uint8_t                                      console;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Console
        _m01 int32_t                                      request_reason;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .RequestReason
                                                                         
        SDK_NONVOL_PROPERTIES( "_POWER_MONITOR_INVOCATION.$", 0x8, true, 0x943d7f973b67c03 );               
        SDK_FIXED_SIZE( monitor_invocation_t, 0x8 );                     
    };                                                                   
};
#include "magic/monitor_invocation_t.end.hpp"
SDK_VERIFY( struct power::monitor_invocation_t, 0x8 );
