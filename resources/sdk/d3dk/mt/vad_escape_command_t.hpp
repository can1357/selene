#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_VAD_ESCAPE_COMMAND]
    //  WDK 10
    //
    enum class vad_escape_command_t : int32_t
    {                                        
        getnumvads =       0x0,                // WDK 10
        getvad =           0x1,                // WDK 10
        getvadrange =      0x2,                // WDK 10
        get_pte =          0x3,                // WDK 10
        get_gpummu_caps =  0x4,                // WDK 10
        get_segment_caps = 0x5,                // WDK 10
    };                                       
};
