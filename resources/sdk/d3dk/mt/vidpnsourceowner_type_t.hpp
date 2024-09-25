#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_VIDPNSOURCEOWNER_TYPE]
    //  WDK 10
    //
    enum class vidpnsourceowner_type_t : int32_t
    {                                           
        unowned =      0x0,                       // WDK 10
        shared =       0x1,                       // WDK 10
        exclusive =    0x2,                       // WDK 10
        exclusivegdi = 0x3,                       // WDK 10
        emulated =     0x4,                       // WDK 10
    };                                          
};
