#pragma once
#include <sdkgen/support_library.hpp>

namespace power
{
    // [enum POWER_POLICY_DEVICE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class policy_device_type_t : int32_t                
    {                                                        
        device_system_button =                       0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_thermal_zone =                        0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_battery =                             0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_memory =                              0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initiate_power_action_api =                  0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_power_state_api =                        0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        immediate_doze_s4 =                          0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_idle =                                0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_wake_alarm =                          0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_fan =                                 0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cs_battery_saver =                           0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        immediate_doze_s4_predicted =                0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        immediate_doze_s4_predicted_no_wake =        0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        immediate_doze_s4_adaptive_budget =          0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        immediate_doze_s4_adaptive_reserve_no_wake = 0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //device_max =                               0xf,      // Windows 10 v1607
        system_initiated_shutdown =                  0xf,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_max =                                 0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                       
};
