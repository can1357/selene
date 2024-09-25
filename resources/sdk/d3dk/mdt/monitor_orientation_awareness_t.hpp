#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [enum _D3DKMDT_MONITOR_ORIENTATION_AWARENESS]
    //  WDK 10
    //
    enum class monitor_orientation_awareness_t : int32_t
    {                                                   
        uninitialized = 0x0,                              // WDK 10
        none =          0x1,                              // WDK 10
        polled =        0x2,                              // WDK 10
        interruptible = 0x3,                              // WDK 10
    };                                                  
};
