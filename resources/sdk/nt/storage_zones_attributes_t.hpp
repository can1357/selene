#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_ZONES_ATTRIBUTES]
    //  WDK 10
    //
    enum class storage_zones_attributes_t : int32_t
    {                                              
        and_length_may_different =        0x0,       // WDK 10
        same_length_same =                0x1,       // WDK 10
        same_last_zone_length_different = 0x2,       // WDK 10
        may_different_length_same =       0x3,       // WDK 10
    };                                             
};
