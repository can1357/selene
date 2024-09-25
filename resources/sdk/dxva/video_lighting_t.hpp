#pragma once
#include <sdkgen/support_library.hpp>

namespace dxva
{
    // [enum _DXVA_VideoLighting]
    //  WDK 10
    //
    enum class video_lighting_t : int32_t
    {                                    
        unknown = 0x0,                     // WDK 10
        bright =  0x1,                     // WDK 10
        office =  0x2,                     // WDK 10
        dim =     0x3,                     // WDK 10
        dark =    0x4,                     // WDK 10
        shift =   0x12,                    // WDK 10
        mask =    0x3c0000,                // WDK 10
    };                                   
};
