#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_SCHEDULING_LOG_OPERATION]
    //  WDK 10
    //
    enum class scheduling_log_operation_t : int32_t                 
    {                                                               
        dxgk_scheduling_log_operation_context_state_change = 0x0,     // WDK 10
    };                                                              
};
