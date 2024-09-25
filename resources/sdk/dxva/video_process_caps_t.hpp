#pragma once
#include <sdkgen/support_library.hpp>

namespace dxva
{
    // [enum _DXVA_VideoProcessCaps]
    //  WDK 10
    //
    enum class video_process_caps_t : int32_t
    {                                        
        none =                 0x0,            // WDK 10
        yuv2rgb =              0x1,            // WDK 10
        stretch_x =            0x2,            // WDK 10
        stretch_y =            0x4,            // WDK 10
        alpha_blend =          0x8,            // WDK 10
        sub_rects =            0x10,           // WDK 10
        sub_streams =          0x20,           // WDK 10
        sub_streams_extended = 0x40,           // WDK 10
        yuv2rgb_extended =     0x80,           // WDK 10
        alpha_blend_extended = 0x100,          // WDK 10
    };                                       
};
