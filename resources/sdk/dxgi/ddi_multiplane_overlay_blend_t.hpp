#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_DDI_MULTIPLANE_OVERLAY_BLEND]
    //  WDK 10
    //
    enum class ddi_multiplane_overlay_blend_t : int32_t
    {                                                  
        opaque =     0x0,                                // WDK 10
        alphablend = 0x1,                                // WDK 10
    };                                                 
};
