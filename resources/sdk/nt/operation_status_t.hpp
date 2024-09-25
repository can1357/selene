#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _OPERATION_STATUS]
    //  WDK 10
    //
    enum class operation_status_t : int32_t    
    {                                          
        completed_with_success =       0x1,      // WDK 10
        completed_with_error =         0x2,      // WDK 10
        completed_with_residual_data = 0x3,      // WDK 10
        in_progress_in_foreground =    0x11,     // WDK 10
        in_progress_in_background =    0x12,     // WDK 10
        terminated =                   0x60,     // WDK 10
    };                                         
};
