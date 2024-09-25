#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_ALLOCATIONRESIDENCYSTATUS]
    //  WDK 10
    //
    enum class allocationresidencystatus_t : int32_t
    {                                               
        residentingpumemory =    0x1,                 // WDK 10
        residentinsharedmemory = 0x2,                 // WDK 10
        notresident =            0x3,                 // WDK 10
    };                                              
};
