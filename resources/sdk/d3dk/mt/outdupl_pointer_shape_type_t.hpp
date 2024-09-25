#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE]
    //  WDK 10
    //
    enum class outdupl_pointer_shape_type_t : int32_t
    {                                                
        monochrome =   0x1,                            // WDK 10
        color =        0x2,                            // WDK 10
        masked_color = 0x4,                            // WDK 10
    };                                               
};
