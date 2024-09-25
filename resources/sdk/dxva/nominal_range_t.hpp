#pragma once
#include <sdkgen/support_library.hpp>

namespace dxva
{
    // [enum _DXVA_NominalRange]
    //  WDK 10
    //
    enum class nominal_range_t : int32_t
    {                                   
        range_unknown = 0x0,              // WDK 10
        range_0_255 =   0x1,              // WDK 10
        range_normal =  0x1,              // WDK 10
        range_16_235 =  0x2,              // WDK 10
        range_wide =    0x2,              // WDK 10
        range_48_208 =  0x3,              // WDK 10
        range_shift =   0xc,              // WDK 10
        range_mask =    0x7000,           // WDK 10
    };                                  
};
