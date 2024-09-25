#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxDevicePwrRequirementStates]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_pwr_requirement_states_t : int32_t   
    {                                                      
        invalid =                                   0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unregistered =                              0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_power_required_d0 =                  0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_power_not_required_d0 =              0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_power_not_required_dx =              0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_power_required_dx =                  0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reporting_device_power_available =          0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waiting_for_device_power_required_d0 =      0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        directed_power_down_initiate =              0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                                     0x8,     // Windows 10 v1607
        directed_power_down_complete =              0x9,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        directed_power_up_initiate =                0xa,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        directed_power_up_complete =                0xb,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        directed_power_down_failed_waiting_for_up = 0xc,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        directed_power_down_failed_up_arrived =     0xd,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        directed_power_up_failed_complete =         0xe,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                                       0xf,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
