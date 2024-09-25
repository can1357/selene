#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_ZONE_TYPES]
    //  WDK 10
    //
    enum class storage_zone_types_t : int32_t
    {                                        
        unknown =                    0x0,      // WDK 10
        conventional =               0x1,      // WDK 10
        sequential_write_required =  0x2,      // WDK 10
        sequential_write_preferred = 0x3,      // WDK 10
        max =                        0x4,      // WDK 10
    };                                       
};
