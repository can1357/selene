#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_DISPLAY_CONNECTIVITY]
    //  WDK 10
    //
    enum class diag_display_connectivity_t : int32_t
    {                                               
        connectivity_uninitialized = 0x0,             // WDK 10
        not_connected =              0x1,             // WDK 10
        connected =                  0x2,             // WDK 10
    };                                              
};
