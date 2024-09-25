#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_GDIROP_COLORFILL]
    //  WDK 10
    //
    enum class gdirop_colorfill_t : int32_t
    {                                      
        invalid =   0x0,                     // WDK 10
        patcopy =   0x1,                     // WDK 10
        patinvert = 0x2,                     // WDK 10
        pdxn =      0x3,                     // WDK 10
        dstinvert = 0x4,                     // WDK 10
        patand =    0x5,                     // WDK 10
        pator =     0x6,                     // WDK 10
        rop3 =      0x7,                     // WDK 10
    };                                     
};
