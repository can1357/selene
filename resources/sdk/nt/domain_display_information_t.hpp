#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DOMAIN_DISPLAY_INFORMATION]
    //  WDK 10
    //
    enum class domain_display_information_t : int32_t
    {                                                
        user =      0x1,                               // WDK 10
        machine =   0x2,                               // WDK 10
        group =     0x3,                               // WDK 10
        oem_user =  0x4,                               // WDK 10
        oem_group = 0x5,                               // WDK 10
        server =    0x6,                               // WDK 10
    };                                               
};
