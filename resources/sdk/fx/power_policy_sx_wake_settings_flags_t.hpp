#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPowerPolicySxWakeSettingsFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_policy_sx_wake_settings_flags_t : int32_t
    {                                                         
        device_enabled_flag = 0x1,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        children_armed_flag = 0x2,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
