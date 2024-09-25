#pragma once
#include <sdkgen/support_library.hpp>

namespace video
{
    // [enum _VIDEO_POWER_STATE]
    //  WDK 10
    //
    enum class power_state_t : int32_t
    {                                 
        unspecified = 0x0,              // WDK 10
        on =          0x1,              // WDK 10
        stand_by =    0x2,              // WDK 10
        suspend =     0x3,              // WDK 10
        off =         0x4,              // WDK 10
        hibernate =   0x5,              // WDK 10
        shutdown =    0x6,              // WDK 10
        maximum =     0x7,              // WDK 10
    };                                
};
