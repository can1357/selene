#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum D3DDDI_SCANLINEORDERING]
    //  WDK 10
    //
    enum class scanlineordering_t : int32_t
    {                                      
        unknown =     0x0,                   // WDK 10
        progressive = 0x1,                   // WDK 10
        interlaced =  0x2,                   // WDK 10
    };                                     
};
