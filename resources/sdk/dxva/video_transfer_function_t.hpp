#pragma once
#include <sdkgen/support_library.hpp>

namespace dxva
{
    // [enum _DXVA_VideoTransferFunction]
    //  WDK 10
    //
    enum class video_transfer_function_t : int32_t
    {                                             
        func_mask =          -0x8000000,            // WDK 10
        func_unknown =       0x0,                   // WDK 10
        func_10 =            0x1,                   // WDK 10
        func_18 =            0x2,                   // WDK 10
        func_20 =            0x3,                   // WDK 10
        func_22 =            0x4,                   // WDK 10
        func_22_709 =        0x5,                   // WDK 10
        func_22_240m =       0x6,                   // WDK 10
        func_22_8bit_s_rgb = 0x7,                   // WDK 10
        func_28 =            0x8,                   // WDK 10
        func_shift =         0x1b,                  // WDK 10
    };                                            
};
