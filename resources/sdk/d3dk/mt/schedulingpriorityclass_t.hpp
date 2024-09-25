#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_SCHEDULINGPRIORITYCLASS]
    //  WDK 10
    //
    enum class schedulingpriorityclass_t : int32_t
    {                                             
        idle =         0x0,                         // WDK 10
        below_normal = 0x1,                         // WDK 10
        normal =       0x2,                         // WDK 10
        above_normal = 0x3,                         // WDK 10
        high =         0x4,                         // WDK 10
        realtime =     0x5,                         // WDK 10
    };                                            
};
