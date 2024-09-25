#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_CAPS]
    //  WDK 10
    //
    enum class ddi_multiplane_overlay_stereo_caps_t : int32_t
    {                                                        
        separate =           0x1,                              // WDK 10
        row_interleaved =    0x4,                              // WDK 10
        column_interleaved = 0x8,                              // WDK 10
        checkerboard =       0x10,                             // WDK 10
        flip_mode =          0x20,                             // WDK 10
    };                                                       
};
