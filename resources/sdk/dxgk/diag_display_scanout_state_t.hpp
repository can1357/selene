#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_DISPLAY_SCANOUT_STATE]
    //  WDK 10
    //
    enum class diag_display_scanout_state_t : int32_t
    {                                                
        state_uninitialized = 0x0,                     // WDK 10
        disabled =            0x1,                     // WDK 10
        active =              0x2,                     // WDK 10
        active_black =        0x3,                     // WDK 10
    };                                               
};
