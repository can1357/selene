#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_BRIGHTNESS_INFO_TYPE]
    //  WDK 10
    //
    enum class brightness_info_type_t : int32_t
    {                                          
        get_possible_levels = 0x1,               // WDK 10
        get =                 0x2,               // WDK 10
        set =                 0x3,               // WDK 10
        get_caps =            0x4,               // WDK 10
        set_state =           0x5,               // WDK 10
        set_optimization =    0x6,               // WDK 10
        get_reduction =       0x7,               // WDK 10
        begin_manual_mode =   0x8,               // WDK 10
        end_manual_mode =     0x9,               // WDK 10
        toggle_logging =      0xa,               // WDK 10
        get_nit_ranges =      0xb,               // WDK 10
    };                                         
};
