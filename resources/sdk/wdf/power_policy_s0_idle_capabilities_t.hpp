#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_policy_s0_idle_capabilities_t : int32_t
    {                                                       
        caps_invalid =          0x0,                          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cannot_wake_from_s0 =   0x1,                          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        can_wake_from_s0 =      0x2,                          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        usb_selective_suspend = 0x3,                          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
