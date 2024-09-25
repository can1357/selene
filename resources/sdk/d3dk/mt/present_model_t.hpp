#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mt
{
    // [enum _D3DKMT_PRESENT_MODEL]
    //  WDK 10
    //
    enum class present_model_t : int32_t
    {                                   
        uninitialized =          0x0,     // WDK 10
        redirected_gdi =         0x1,     // WDK 10
        redirected_flip =        0x2,     // WDK 10
        redirected_blt =         0x3,     // WDK 10
        redirected_vistablt =    0x4,     // WDK 10
        screencapturefence =     0x5,     // WDK 10
        redirected_gdi_sysmem =  0x6,     // WDK 10
        redirected_composition = 0x7,     // WDK 10
        surfacecomplete =        0x8,     // WDK 10
        flipmanager =            0x9,     // WDK 10
    };                                  
};
