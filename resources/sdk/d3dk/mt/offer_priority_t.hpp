#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_OFFER_PRIORITY]
    //  WDK 10
    //
    enum class offer_priority_t : int32_t
    {                                    
        low =    0x1,                      // WDK 10
        normal = 0x2,                      // WDK 10
        high =   0x3,                      // WDK 10
        _auto =  0x4,                      // WDK 10
    };                                   
};
