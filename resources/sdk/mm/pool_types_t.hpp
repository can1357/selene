#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_POOL_TYPES]
    //  Windows 10 v1607
    //
    enum class pool_types_t : int32_t
    {                                
        non_paged_pool =     0x0,      // Windows 10 v1607
        paged_pool =         0x1,      // Windows 10 v1607
        session_paged_pool = 0x2,      // Windows 10 v1607
        maximum_pool_type =  0x3,      // Windows 10 v1607
    };                               
};
