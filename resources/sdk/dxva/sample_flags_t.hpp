#pragma once
#include <sdkgen/support_library.hpp>

namespace dxva
{
    // [enum _DXVA_SampleFlags]
    //  WDK 10
    //
    enum class sample_flags_t : int32_t  
    {                                    
        flag_palette_changed =    0x1,     // WDK 10
        flag_src_rect_changed =   0x2,     // WDK 10
        flag_dst_rect_changed =   0x4,     // WDK 10
        flag_color_data_changed = 0x8,     // WDK 10
        flags_mask =              0xf,     // WDK 10
    };                                   
};
