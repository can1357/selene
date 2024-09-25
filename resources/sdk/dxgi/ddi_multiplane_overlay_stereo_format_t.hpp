#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FORMAT]
    //  WDK 10
    //
    enum class ddi_multiplane_overlay_stereo_format_t : int32_t
    {                                                          
        mono =               0x0,                                // WDK 10
        horizontal =         0x1,                                // WDK 10
        vertical =           0x2,                                // WDK 10
        separate =           0x3,                                // WDK 10
        mono_offset =        0x4,                                // WDK 10
        row_interleaved =    0x5,                                // WDK 10
        column_interleaved = 0x6,                                // WDK 10
        checkerboard =       0x7,                                // WDK 10
    };                                                         
};
