#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_COLOR_SPACE_TYPE]
    //  WDK 10
    //
    enum class color_space_type_t : int32_t        
    {                                              
        custom =                           -0x1,     // WDK 10
        rgb_full_g22_none_p709 =           0x0,      // WDK 10
        rgb_full_g10_none_p709 =           0x1,      // WDK 10
        rgb_studio_g22_none_p709 =         0x2,      // WDK 10
        rgb_studio_g22_none_p2020 =        0x3,      // WDK 10
        reserved =                         0x4,      // WDK 10
        ycbcr_full_g22_none_p709_x601 =    0x5,      // WDK 10
        ycbcr_studio_g22_left_p601 =       0x6,      // WDK 10
        ycbcr_full_g22_left_p601 =         0x7,      // WDK 10
        ycbcr_studio_g22_left_p709 =       0x8,      // WDK 10
        ycbcr_full_g22_left_p709 =         0x9,      // WDK 10
        ycbcr_studio_g22_left_p2020 =      0xa,      // WDK 10
        ycbcr_full_g22_left_p2020 =        0xb,      // WDK 10
        rgb_full_g2084_none_p2020 =        0xc,      // WDK 10
        ycbcr_studio_g2084_left_p2020 =    0xd,      // WDK 10
        rgb_studio_g2084_none_p2020 =      0xe,      // WDK 10
        ycbcr_studio_g22_topleft_p2020 =   0xf,      // WDK 10
        ycbcr_studio_g2084_topleft_p2020 = 0x10,     // WDK 10
        rgb_full_g22_none_p2020 =          0x11,     // WDK 10
        ycbcr_studio_ghlg_topleft_p2020 =  0x12,     // WDK 10
        ycbcr_full_ghlg_topleft_p2020 =    0x13,     // WDK 10
        rgb_studio_g24_none_p709 =         0x14,     // WDK 10
        rgb_studio_g24_none_p2020 =        0x15,     // WDK 10
        ycbcr_studio_g24_left_p709 =       0x16,     // WDK 10
        ycbcr_studio_g24_left_p2020 =      0x17,     // WDK 10
        ycbcr_studio_g24_topleft_p2020 =   0x18,     // WDK 10
    };                                             
};
