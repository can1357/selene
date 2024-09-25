#pragma once
#include <sdkgen/support_library.hpp>

namespace video
{
    // [enum VIDEO_SYNCHRONIZE_PRIORITY]
    //  WDK 10
    //
    enum class synchronize_priority_t : int32_t
    {                                          
        low_priority =    0x0,                   // WDK 10
        medium_priority = 0x1,                   // WDK 10
        high_priority =   0x2,                   // WDK 10
    };                                         
};
