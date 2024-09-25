#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _VP_POOL_TYPE]
    //  WDK 10
    //
    enum class vp_pool_type_t : int32_t       
    {                                         
        non_paged_pool =               0x0,     // WDK 10
        paged_pool =                   0x1,     // WDK 10
        non_paged_pool_cache_aligned = 0x4,     // WDK 10
        paged_pool_cache_aligned =     0x5,     // WDK 10
    };                                        
};
