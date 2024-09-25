#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_GDIROP_BITBLT]
    //  WDK 10
    //
    enum class gdirop_bitblt_t : int32_t
    {                                   
        invalid =   0x0,                  // WDK 10
        srccopy =   0x1,                  // WDK 10
        srcinvert = 0x2,                  // WDK 10
        srcand =    0x3,                  // WDK 10
        srcor =     0x4,                  // WDK 10
        rop3 =      0x5,                  // WDK 10
    };                                  
};
