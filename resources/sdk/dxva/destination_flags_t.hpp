#pragma once
#include <sdkgen/support_library.hpp>

namespace dxva
{
    // [enum _DXVA_DestinationFlags]
    //  WDK 10
    //
    enum class destination_flags_t : int32_t
    {                                       
        flag_background_changed =  0x1,       // WDK 10
        flag_target_rect_changed = 0x2,       // WDK 10
        flag_color_data_changed =  0x4,       // WDK 10
        flag_alpha_changed =       0x8,       // WDK 10
        flag_mask =                0xf,       // WDK 10
    };                                      
};
