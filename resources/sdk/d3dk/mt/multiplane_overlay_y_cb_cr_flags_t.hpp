#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum D3DKMT_MULTIPLANE_OVERLAY_YCbCr_FLAGS]
    //  WDK 10
    //
    enum class multiplane_overlay_y_cb_cr_flags_t : int32_t
    {                                                      
        nominal_range = 0x1,                                 // WDK 10
        bt709 =         0x2,                                 // WDK 10
        xv_ycc =        0x4,                                 // WDK 10
    };                                                     
};
