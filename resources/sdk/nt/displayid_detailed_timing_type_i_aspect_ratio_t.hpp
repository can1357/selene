#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DISPLAYID_DETAILED_TIMING_TYPE_I_ASPECT_RATIO]
    //  WDK 10
    //
    enum class displayid_detailed_timing_type_i_aspect_ratio_t : int32_t
    {                                                                   
        ratio_1x1 =   0x0,                                                // WDK 10
        ratio_5x4 =   0x1,                                                // WDK 10
        ratio_4x3 =   0x2,                                                // WDK 10
        ratio_15x9 =  0x3,                                                // WDK 10
        ratio_16x9 =  0x4,                                                // WDK 10
        ratio_16x10 = 0x5,                                                // WDK 10
    };                                                                  
};
