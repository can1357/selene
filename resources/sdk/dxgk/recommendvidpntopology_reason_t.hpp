#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_RECOMMENDVIDPNTOPOLOGY_REASON]
    //  WDK 10
    //
    enum class recommendvidpntopology_reason_t : int32_t
    {                                                   
        uninitialized =              0x0,                 // WDK 10
        initialization_nolkg =       0x1,                 // WDK 10
        augmentation_nolkg =         0x2,                 // WDK 10
        augmentation_lkgoverride =   0x3,                 // WDK 10
        initialization_lkgoverride = 0x4,                 // WDK 10
    };                                                  
};
