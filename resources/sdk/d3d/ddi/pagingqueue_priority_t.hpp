#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum D3DDDI_PAGINGQUEUE_PRIORITY]
    //  WDK 10
    //
    enum class pagingqueue_priority_t : int32_t
    {                                          
        below_normal = -0x1,                     // WDK 10
        normal =       0x0,                      // WDK 10
        above_normal = 0x1,                      // WDK 10
    };                                         
};
