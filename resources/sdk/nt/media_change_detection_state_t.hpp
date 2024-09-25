#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MEDIA_CHANGE_DETECTION_STATE]
    //  WDK 10
    //
    enum class media_change_detection_state_t : int32_t
    {                                                  
        unknown =     0x0,                               // WDK 10
        present =     0x1,                               // WDK 10
        not_present = 0x2,                               // WDK 10
        unavailable = 0x3,                               // WDK 10
    };                                                 
};
