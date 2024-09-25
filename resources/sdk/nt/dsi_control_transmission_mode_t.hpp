#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DSI_CONTROL_TRANSMISSION_MODE]
    //  WDK 10
    //
    enum class dsi_control_transmission_mode_t : int32_t
    {                                                   
        _default =               0x0,                     // WDK 10
        force_low_power =        0x1,                     // WDK 10
        force_high_performance = 0x2,                     // WDK 10
    };                                                  
};
