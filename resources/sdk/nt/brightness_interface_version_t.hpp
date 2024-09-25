#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _BRIGHTNESS_INTERFACE_VERSION]
    //  WDK 10
    //
    enum class brightness_interface_version_t : int32_t
    {                                                  
        version_1 = 0x1,                                 // WDK 10
        version_2 = 0x2,                                 // WDK 10
        version_3 = 0x3,                                 // WDK 10
    };                                                 
};
