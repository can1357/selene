#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_CHILD_DEVICE_HPD_AWARENESS]
    //  WDK 10
    //
    enum class child_device_hpd_awareness_t : int32_t
    {                                                
        uninitialized =    0x0,                        // WDK 10
        always_connected = 0x1,                        // WDK 10
        none =             0x2,                        // WDK 10
        polled =           0x3,                        // WDK 10
        interruptible =    0x4,                        // WDK 10
    };                                               
};
