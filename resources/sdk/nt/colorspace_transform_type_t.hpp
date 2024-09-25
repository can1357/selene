#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _COLORSPACE_TRANSFORM_TYPE]
    //  WDK 10
    //
    enum class colorspace_transform_type_t : int32_t
    {                                               
        uninitialized = 0x0,                          // WDK 10
        _default =      0x1,                          // WDK 10
        rgb256x3x16 =   0x2,                          // WDK 10
        dxgi_1 =        0x3,                          // WDK 10
        matrix_3x4 =    0x4,                          // WDK 10
        matrix_v2 =     0x5,                          // WDK 10
    };                                              
};
