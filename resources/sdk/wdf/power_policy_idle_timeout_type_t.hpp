#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_POWER_POLICY_IDLE_TIMEOUT_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_policy_idle_timeout_type_t : int32_t
    {                                                    
        driver_managed_idle_timeout =           0x0,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_managed_idle_timeout =           0x1,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_managed_idle_timeout_with_hint = 0x2,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
