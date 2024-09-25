#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxPowerPolicyConstants]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class power_policy_constants_t : int32_t
    {                                            
        no_timeout =      0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        default_timeout = 0x1388,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
