#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MEDIA_BLANK_TYPE]
    //  WDK 10
    //
    enum class media_blank_type_t : int32_t
    {                                      
        full =                 0x0,          // WDK 10
        minimal =              0x1,          // WDK 10
        incomplete_track =     0x2,          // WDK 10
        unreserve_last_track = 0x3,          // WDK 10
        track_tail =           0x4,          // WDK 10
        unclose_last_session = 0x5,          // WDK 10
        erase_last_session =   0x6,          // WDK 10
    };                                     
};
