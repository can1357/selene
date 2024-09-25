#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_TIER_MEDIA_TYPE]
    //  WDK 10
    //
    enum class storage_tier_media_type_t : int32_t
    {                                             
        unspecified = 0x0,                          // WDK 10
        disk =        0x1,                          // WDK 10
        ssd =         0x2,                          // WDK 10
        scm =         0x4,                          // WDK 10
        max =         0x5,                          // WDK 10
    };                                            
};
