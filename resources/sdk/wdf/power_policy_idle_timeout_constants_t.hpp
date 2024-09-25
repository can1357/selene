#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_POWER_POLICY_IDLE_TIMEOUT_CONSTANTS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_policy_idle_timeout_constants_t : int32_t
    {                                                         
        idle_timeout_default_constant = 0x0,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
