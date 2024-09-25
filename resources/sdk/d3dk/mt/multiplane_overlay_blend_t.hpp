#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum D3DKMT_MULTIPLANE_OVERLAY_BLEND]
    //  WDK 10
    //
    enum class multiplane_overlay_blend_t : int32_t
    {                                              
        opaque =     0x0,                            // WDK 10
        alphablend = 0x1,                            // WDK 10
    };                                             
};
