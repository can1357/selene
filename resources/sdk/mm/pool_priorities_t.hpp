#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_POOL_PRIORITIES]
    //  Windows 10 v1607
    //
    enum class pool_priorities_t : int32_t
    {                                     
        high_priority =         0x0,        // Windows 10 v1607
        normal_priority =       0x1,        // Windows 10 v1607
        low_priority =          0x2,        // Windows 10 v1607
        maximum_pool_priority = 0x3,        // Windows 10 v1607
    };                                    
};
