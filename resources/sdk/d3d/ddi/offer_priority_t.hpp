#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum _D3DDDI_OFFER_PRIORITY]
    //  WDK 10
    //
    enum class offer_priority_t : int32_t
    {                                    
        none =   0x0,                      // WDK 10
        low =    0x1,                      // WDK 10
        normal = 0x2,                      // WDK 10
        high =   0x3,                      // WDK 10
        _auto =  0x4,                      // WDK 10
    };                                   
};
