#pragma once
#include <sdkgen/support_library.hpp>

namespace dxva
{
    // [enum _DXVA_DeinterlaceTech]
    //  WDK 10
    //
    enum class deinterlace_tech_t : int32_t  
    {                                        
        unknown =                   0x0,       // WDK 10
        bob_line_replicate =        0x1,       // WDK 10
        bob_vertical_stretch =      0x2,       // WDK 10
        median_filtering =          0x4,       // WDK 10
        edge_filtering =            0x10,      // WDK 10
        field_adaptive =            0x20,      // WDK 10
        pixel_adaptive =            0x40,      // WDK 10
        motion_vector_steered =     0x80,      // WDK 10
        bob_vertical_stretch4_tap = 0x100,     // WDK 10
    };                                       
};
