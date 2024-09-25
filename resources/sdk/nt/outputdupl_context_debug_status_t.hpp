#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _OUTPUTDUPL_CONTEXT_DEBUG_STATUS]
    //  WDK 10
    //
    enum class outputdupl_context_debug_status_t : int32_t
    {                                                     
        force_uint32 =    -0x1,                             // WDK 10
        inactive =        0x0,                              // WDK 10
        active =          0x1,                              // WDK 10
        pending_destroy = 0x2,                              // WDK 10
    };                                                    
};
