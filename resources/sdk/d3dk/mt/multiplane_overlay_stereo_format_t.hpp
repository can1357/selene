#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT]
    //  WDK 10
    //
    enum class multiplane_overlay_stereo_format_t : int32_t                 
    {                                                                       
        dxgkmt_multiplane_overlay_stereo_format_mono =               0x0,     // WDK 10
        d3dkmt_multiplane_overlay_stereo_format_horizontal =         0x1,     // WDK 10
        d3dkmt_multiplane_overlay_stereo_format_vertical =           0x2,     // WDK 10
        dxgkmt_multiplane_overlay_stereo_format_separate =           0x3,     // WDK 10
        dxgkmt_multiplane_overlay_stereo_format_mono_offset =        0x4,     // WDK 10
        dxgkmt_multiplane_overlay_stereo_format_row_interleaved =    0x5,     // WDK 10
        dxgkmt_multiplane_overlay_stereo_format_column_interleaved = 0x6,     // WDK 10
        dxgkmt_multiplane_overlay_stereo_format_checkerboard =       0x7,     // WDK 10
    };                                                                      
};
