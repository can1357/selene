#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxRequestPowerStopState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_power_stop_state_t : int32_t
    {                                              
        unknown =                   0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        acknowledged =              0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        acknowledged_with_requeue = 0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
