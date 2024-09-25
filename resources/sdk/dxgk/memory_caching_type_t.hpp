#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_MEMORY_CACHING_TYPE]
    //  WDK 10
    //
    enum class memory_caching_type_t : int32_t
    {                                         
        non_cached =     0x0,                   // WDK 10
        cached =         0x1,                   // WDK 10
        write_combined = 0x2,                   // WDK 10
    };                                        
};
