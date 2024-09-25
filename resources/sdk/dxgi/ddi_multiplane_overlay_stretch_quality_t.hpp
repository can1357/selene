#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgi
{
    // [enum DXGI_DDI_MULTIPLANE_OVERLAY_STRETCH_QUALITY]
    //  WDK 10
    //
    enum class ddi_multiplane_overlay_stretch_quality_t : int32_t
    {                                                            
        bilinear = 0x1,                                            // WDK 10
        high =     0x2,                                            // WDK 10
    };                                                           
};
