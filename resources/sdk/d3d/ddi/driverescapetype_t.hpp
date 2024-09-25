#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum _D3DDDI_DRIVERESCAPETYPE]
    //  WDK 10
    //
    enum class driverescapetype_t : int32_t
    {                                      
        translateallocationhandle = 0x0,     // WDK 10
        translateresourcehandle =   0x1,     // WDK 10
        max =                       0x2,     // WDK 10
    };                                     
};
