#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _USBFN_DIRECTION]
    //  WDK 10
    //
    enum class usbfn_direction_t : int32_t
    {                                     
        minimum = 0x0,                      // WDK 10
        in =      0x1,                      // WDK 10
        tx =      0x1,                      // WDK 10
        out =     0x2,                      // WDK 10
        rx =      0x2,                      // WDK 10
        maximum = 0x3,                      // WDK 10
    };                                    
};
