#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_DISPLAY_MODE_SET]
    //  WDK 10
    //
    enum class diag_display_mode_set_t : int32_t
    {                                           
        uninitialized = 0x0,                      // WDK 10
        no =            0x1,                      // WDK 10
        yes =           0x2,                      // WDK 10
    };                                          
};
