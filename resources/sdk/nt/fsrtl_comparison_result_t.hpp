#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _FSRTL_COMPARISON_RESULT]
    //  WDK 10
    //
    enum class fsrtl_comparison_result_t : int32_t
    {                                             
        less_than =    -0x1,                        // WDK 10
        equal_to =     0x0,                         // WDK 10
        greater_than = 0x1,                         // WDK 10
    };                                            
};
