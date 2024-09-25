#pragma once
#include <sdkgen/support_library.hpp>

namespace dxva
{
    // [enum _DXVA_ProcAmpControlProp]
    //  WDK 10
    //
    enum class proc_amp_control_prop_t : int32_t
    {                                           
        none =       0x0,                         // WDK 10
        brightness = 0x1,                         // WDK 10
        contrast =   0x2,                         // WDK 10
        hue =        0x4,                         // WDK 10
        saturation = 0x8,                         // WDK 10
    };                                          
};
