#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::dt
{
    // [enum _DXGKDT_OPM_DVI_CHARACTERISTICS]
    //  WDK 10
    //
    enum class opm_dvi_characteristics_t : int32_t
    {                                             
        characteristics_force_ulong = -0x1,         // WDK 10
        characteristic_1_0 =          0x1,          // WDK 10
        characteristic_1_1_or_above = 0x2,          // WDK 10
    };                                            
};
