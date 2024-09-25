#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _VPD_ASSOCIATION]
    //  WDK 10
    //
    enum class vpd_association_t : int32_t
    {                                     
        device =    0x0,                    // WDK 10
        port =      0x1,                    // WDK 10
        target =    0x2,                    // WDK 10
        reserved1 = 0x3,                    // WDK 10
        reserved2 = 0x4,                    // WDK 10
    };                                    
};
