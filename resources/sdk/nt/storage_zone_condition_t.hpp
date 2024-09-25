#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_ZONE_CONDITION]
    //  WDK 10
    //
    enum class storage_zone_condition_t : int32_t
    {                                            
        conventional =      0x0,                   // WDK 10
        empty =             0x1,                   // WDK 10
        implicitly_opened = 0x2,                   // WDK 10
        explicitly_opened = 0x3,                   // WDK 10
        closed =            0x4,                   // WDK 10
        read_only =         0xd,                   // WDK 10
        full =              0xe,                   // WDK 10
        offline =           0xf,                   // WDK 10
    };                                           
};
