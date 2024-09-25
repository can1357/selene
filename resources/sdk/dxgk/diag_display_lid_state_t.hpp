#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_DISPLAY_LID_STATE]
    //  WDK 10
    //
    enum class diag_display_lid_state_t : int32_t
    {                                            
        uninitialized = 0x0,                       // WDK 10
        notapplicable = 0x1,                       // WDK 10
        open =          0x2,                       // WDK 10
        close =         0x3,                       // WDK 10
        unknown =       0x4,                       // WDK 10
    };                                           
};
