#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi
{
    // [enum _D3DDDI_POOL]
    //  WDK 10
    //
    enum class pool_t : int32_t 
    {                           
        systemmem =      0x1,     // WDK 10
        videomemory =    0x2,     // WDK 10
        localvidmem =    0x3,     // WDK 10
        nonlocalvidmem = 0x4,     // WDK 10
        stagingmem =     0x5,     // WDK 10
    };                          
};
