#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_TDRDBGCTRLTYPE]
    //  WDK 10
    //
    enum class tdrdbgctrltype_t : int32_t
    {                                    
        forcetdr =         0x0,            // WDK 10
        disablebreak =     0x1,            // WDK 10
        enablebreak =      0x2,            // WDK 10
        unconditional =    0x3,            // WDK 10
        vsynctdr =         0x4,            // WDK 10
        gputdr =           0x5,            // WDK 10
        forcedodtdr =      0x6,            // WDK 10
        forcedodvsynctdr = 0x7,            // WDK 10
        enginetdr =        0x8,            // WDK 10
    };                                   
};
