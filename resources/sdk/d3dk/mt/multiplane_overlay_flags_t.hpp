#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum D3DKMT_MULTIPLANE_OVERLAY_FLAGS]
    //  WDK 10
    //
    enum class multiplane_overlay_flags_t : int32_t
    {                                              
        vertical_flip =   0x1,                       // WDK 10
        horizontal_flip = 0x2,                       // WDK 10
    };                                             
};
