#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum _D3DDDI_QUERYREGISTRY_TYPE]
    //  WDK 10
    //
    enum class queryregistry_type_t : int32_t
    {                                        
        servicekey =      0x0,                 // WDK 10
        adapterkey =      0x1,                 // WDK 10
        driverstorepath = 0x2,                 // WDK 10
        driverimagepath = 0x3,                 // WDK 10
        max =             0x4,                 // WDK 10
    };                                       
};
