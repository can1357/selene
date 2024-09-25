#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_policy_s0_idle_user_control_t : int32_t
    {                                                       
        user_control_invalid =      0x0,                      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        do_not_allow_user_control = 0x1,                      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        allow_user_control =        0x2,                      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
