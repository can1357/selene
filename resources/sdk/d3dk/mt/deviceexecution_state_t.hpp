#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_DEVICEEXECUTION_STATE]
    //  WDK 10
    //
    enum class deviceexecution_state_t : int32_t
    {                                           
        active =             0x1,                 // WDK 10
        reset =              0x2,                 // WDK 10
        hung =               0x3,                 // WDK 10
        stopped =            0x4,                 // WDK 10
        error_outofmemory =  0x5,                 // WDK 10
        error_dmafault =     0x6,                 // WDK 10
        error_dmapagefault = 0x7,                 // WDK 10
    };                                          
};
