#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum _D3DDDI_ROTATION]
    //  WDK 10
    //
    enum class rotation_t : int32_t
    {                              
        rotation_identity = 0x1,     // WDK 10
        rotation_90 =       0x2,     // WDK 10
        rotation_180 =      0x3,     // WDK 10
        rotation_270 =      0x4,     // WDK 10
    };                             
};
