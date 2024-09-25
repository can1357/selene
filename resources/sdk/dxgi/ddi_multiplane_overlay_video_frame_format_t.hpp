#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_DDI_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT]
    //  WDK 10
    //
    enum class ddi_multiplane_overlay_video_frame_format_t : int32_t                 
    {                                                                                
        muliiplane_overlay_video_frame_format_progressive =                   0x0,     // WDK 10
        multiplane_overlay_video_frame_format_interlaced_top_field_first =    0x1,     // WDK 10
        multiplane_overlay_video_frame_format_interlaced_bottom_field_first = 0x2,     // WDK 10
    };                                                                               
};
