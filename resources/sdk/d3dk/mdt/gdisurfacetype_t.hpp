#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [enum _D3DKMDT_GDISURFACETYPE]
    //  WDK 10
    //
    enum class gdisurfacetype_t : int32_t        
    {                                            
        invalid =                         0x0,     // WDK 10
        texture =                         0x1,     // WDK 10
        staging_cpuvisible =              0x2,     // WDK 10
        staging =                         0x3,     // WDK 10
        lookuptable =                     0x4,     // WDK 10
        existingsysmem =                  0x5,     // WDK 10
        texture_cpuvisible =              0x6,     // WDK 10
        texture_crossadapter =            0x7,     // WDK 10
        texture_cpuvisible_crossadapter = 0x8,     // WDK 10
    };                                           
};
