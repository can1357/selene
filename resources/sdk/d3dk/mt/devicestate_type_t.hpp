#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_DEVICESTATE_TYPE]
    //  WDK 10
    //
    enum class devicestate_type_t : int32_t
    {                                      
        execution =     0x1,                 // WDK 10
        present =       0x2,                 // WDK 10
        reset =         0x3,                 // WDK 10
        present_dwm =   0x4,                 // WDK 10
        page_fault =    0x5,                 // WDK 10
        present_queue = 0x6,                 // WDK 10
    };                                     
};
