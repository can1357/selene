#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_DDI_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE]
    //  WDK 10
    //
    enum class ddi_multiplane_overlay_stereo_flip_mode_t : int32_t
    {                                                             
        none =   0x0,                                               // WDK 10
        frame0 = 0x1,                                               // WDK 10
        frame1 = 0x2,                                               // WDK 10
    };                                                            
};
