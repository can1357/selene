#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [enum _D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE]
    //  WDK 10
    //
    enum class enumcofuncmodality_pivot_type_t : int32_t
    {                                                   
        uninitialized = 0x0,                              // WDK 10
        vidpnsource =   0x1,                              // WDK 10
        vidpntarget =   0x2,                              // WDK 10
        scaling =       0x3,                              // WDK 10
        rotation =      0x4,                              // WDK 10
        nopivot =       0x5,                              // WDK 10
    };                                                  
};
