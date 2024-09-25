#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _D3DDDIMULTISAMPLE_TYPE]
    //  WDK 10
    //
    enum class d3dddimultisample_type_t : int32_t     
    {                                                 
        d3dddimultisample_none =        0x0,            // WDK 10
        d3dddimultisample_nonmaskable = 0x1,            // WDK 10
        d3dddimultisample_2_samples =   0x2,            // WDK 10
        d3dddimultisample_3_samples =   0x3,            // WDK 10
        d3dddimultisample_4_samples =   0x4,            // WDK 10
        d3dddimultisample_5_samples =   0x5,            // WDK 10
        d3dddimultisample_6_samples =   0x6,            // WDK 10
        d3dddimultisample_7_samples =   0x7,            // WDK 10
        d3dddimultisample_8_samples =   0x8,            // WDK 10
        d3dddimultisample_9_samples =   0x9,            // WDK 10
        d3dddimultisample_10_samples =  0xa,            // WDK 10
        d3dddimultisample_11_samples =  0xb,            // WDK 10
        d3dddimultisample_12_samples =  0xc,            // WDK 10
        d3dddimultisample_13_samples =  0xd,            // WDK 10
        d3dddimultisample_14_samples =  0xe,            // WDK 10
        d3dddimultisample_15_samples =  0xf,            // WDK 10
        d3dddimultisample_16_samples =  0x10,           // WDK 10
        d3dddimultisample_force_uint =  0x7fffffff,     // WDK 10
    };                                                
};
