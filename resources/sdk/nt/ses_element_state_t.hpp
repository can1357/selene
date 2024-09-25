#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _SES_ELEMENT_STATE]
    //  WDK 10
    //
    enum class ses_element_state_t : int32_t
    {                                       
        not_reported =      0x0,              // WDK 10
        okay =              0x1,              // WDK 10
        critical =          0x2,              // WDK 10
        non_critical =      0x3,              // WDK 10
        unrecoverable =     0x4,              // WDK 10
        not_installed =     0x5,              // WDK 10
        unknown =           0x6,              // WDK 10
        not_available =     0x7,              // WDK 10
        no_access_allowed = 0x8,              // WDK 10
        max =               0x9,              // WDK 10
    };                                      
};
