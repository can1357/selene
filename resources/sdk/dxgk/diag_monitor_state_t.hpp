#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_MONITOR_STATE]
    //  WDK 10
    //
    enum class diag_monitor_state_t : int32_t
    {                                        
        state_uninitialized = 0x0,             // WDK 10
        ready =               0x1,             // WDK 10
        not_ready =           0x2,             // WDK 10
        ready_notapplicable = 0x3,             // WDK 10
    };                                       
};
