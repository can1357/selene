#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DIAG_DISPLAY_HARDWARE_BANDWIDTH]
    //  WDK 10
    //
    enum class diag_display_hardware_bandwidth_t : int32_t
    {                                                     
        bandwidth_uninitialized = 0x0,                      // WDK 10
        bandwidth_sufficient =    0x1,                      // WDK 10
        link_bandwidth_limited =  0x2,                      // WDK 10
        soc_bandwidth_limited =   0x3,                      // WDK 10
        bandwidth_error =         0x4,                      // WDK 10
        bandwidth_unknown =       0x5,                      // WDK 10
    };                                                    
};
