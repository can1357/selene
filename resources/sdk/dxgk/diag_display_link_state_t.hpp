#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_DISPLAY_LINK_STATE]
    //  WDK 10
    //
    enum class diag_display_link_state_t : int32_t
    {                                             
        uninitialized =              0x0,           // WDK 10
        notapplicable =              0x1,           // WDK 10
        stable =                     0x2,           // WDK 10
        failed =                     0x3,           // WDK 10
        continuous_training =        0x4,           // WDK 10
        continuous_training_stable = 0x5,           // WDK 10
        continuous_training_failed = 0x6,           // WDK 10
    };                                            
};
