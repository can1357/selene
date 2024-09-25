#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _COPP_StatusFlags]
    //  WDK 10
    //
    enum class copp_status_flags_t : int32_t
    {                                       
        status_flags_reserved =  -0x4,        // WDK 10
        status_normal =          0x0,         // WDK 10
        link_lost =              0x1,         // WDK 10
        renegotiation_required = 0x2,         // WDK 10
    };                                      
};
