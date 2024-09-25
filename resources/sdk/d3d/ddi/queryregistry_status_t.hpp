#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum _D3DDDI_QUERYREGISTRY_STATUS]
    //  WDK 10
    //
    enum class queryregistry_status_t : int32_t
    {                                          
        success =         0x0,                   // WDK 10
        buffer_overflow = 0x1,                   // WDK 10
        fail =            0x2,                   // WDK 10
        max =             0x3,                   // WDK 10
    };                                         
};
