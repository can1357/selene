#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _MEDIA_TYPE]
    //  WDK 10
    //
    enum class media_type_t : int32_t
    {                                
        unknown =         0x0,         // WDK 10
        f5_1_pt2_512 =    0x1,         // WDK 10
        f3_1_pt44_512 =   0x2,         // WDK 10
        f3_2_pt88_512 =   0x3,         // WDK 10
        f3_20_pt8_512 =   0x4,         // WDK 10
        f3_720_512 =      0x5,         // WDK 10
        f5_360_512 =      0x6,         // WDK 10
        f5_320_512 =      0x7,         // WDK 10
        f5_320_1024 =     0x8,         // WDK 10
        f5_180_512 =      0x9,         // WDK 10
        f5_160_512 =      0xa,         // WDK 10
        removable_media = 0xb,         // WDK 10
        fixed_media =     0xc,         // WDK 10
        f3_120m_512 =     0xd,         // WDK 10
        f3_640_512 =      0xe,         // WDK 10
        f5_640_512 =      0xf,         // WDK 10
        f5_720_512 =      0x10,        // WDK 10
        f3_1_pt2_512 =    0x11,        // WDK 10
        f3_1_pt23_1024 =  0x12,        // WDK 10
        f5_1_pt23_1024 =  0x13,        // WDK 10
        f3_128_mb_512 =   0x14,        // WDK 10
        f3_230_mb_512 =   0x15,        // WDK 10
        f8_256_128 =      0x16,        // WDK 10
        f3_200_mb_512 =   0x17,        // WDK 10
        f3_240m_512 =     0x18,        // WDK 10
        f3_32m_512 =      0x19,        // WDK 10
    };                               
};
