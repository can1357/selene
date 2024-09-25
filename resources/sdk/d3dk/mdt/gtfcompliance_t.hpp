#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [enum _D3DKMDT_GTFCOMPLIANCE]
    //  WDK 10
    //
    enum class gtfcompliance_t : int32_t
    {                                   
        uninitialized = 0x0,              // WDK 10
        compliant =     0x1,              // WDK 10
        notcompliant =  0x2,              // WDK 10
    };                                  
};
