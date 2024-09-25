#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE]
    //  WDK 10
    //
    enum class output_wire_color_space_type_t : int32_t
    {                                                  
        g22_p709 =              0x0,                     // WDK 10
        reserved =              0x4,                     // WDK 10
        g2084_p2020 =           0xc,                     // WDK 10
        g22_p709_wcg =          0x1e,                    // WDK 10
        g22_p2020 =             0x1f,                    // WDK 10
        g2084_p2020_hdr10plus = 0x20,                    // WDK 10
        g2084_p2020_dvll =      0x21,                    // WDK 10
    };                                                 
};
