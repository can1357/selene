#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _OUTPUT_COLOR_ENCODING]
    //  WDK 10
    //
    enum class output_color_encoding_t : int32_t
    {                                           
        force_uint32 = -0x1,                      // WDK 10
        rgb =          0x0,                       // WDK 10
        ycbcr444 =     0x1,                       // WDK 10
        ycbcr422 =     0x2,                       // WDK 10
        ycbcr420 =     0x3,                       // WDK 10
        intensity =    0x4,                       // WDK 10
    };                                          
};
