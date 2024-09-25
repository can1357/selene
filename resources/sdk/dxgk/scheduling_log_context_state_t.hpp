#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_SCHEDULING_LOG_CONTEXT_STATE]
    //  WDK 10
    //
    enum class scheduling_log_context_state_t : int32_t
    {                                                  
        idle =          0x0,                             // WDK 10
        running =       0x1,                             // WDK 10
        ready =         0x2,                             // WDK 10
        ready_standby = 0x3,                             // WDK 10
    };                                                 
};
