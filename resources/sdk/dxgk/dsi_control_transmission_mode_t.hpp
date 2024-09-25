#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_DSI_CONTROL_TRANSMISSION_MODE]
    //  WDK 10
    //
    enum class dsi_control_transmission_mode_t : int32_t
    {                                                   
        _default =         0x0,                           // WDK 10
        force_low_power =  0x1,                           // WDK 10
        force_high_speed = 0x2,                           // WDK 10
    };                                                  
};
