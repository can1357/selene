#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_TIER_CLASS]
    //  WDK 10
    //
    enum class storage_tier_class_t : int32_t
    {                                        
        unspecified = 0x0,                     // WDK 10
        capacity =    0x1,                     // WDK 10
        performance = 0x2,                     // WDK 10
        max =         0x3,                     // WDK 10
    };                                       
};
