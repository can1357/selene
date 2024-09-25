#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT]
    //  WDK 10
    //
    enum class multiplane_overlay_video_frame_format_t : int32_t
    {                                                           
        progressive =                   0x0,                      // WDK 10
        interlaced_top_field_first =    0x1,                      // WDK 10
        interlaced_bottom_field_first = 0x2,                      // WDK 10
    };                                                          
};
