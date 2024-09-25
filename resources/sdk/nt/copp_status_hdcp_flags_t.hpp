#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _COPP_StatusHDCPFlags]
    //  WDK 10
    //
    enum class copp_status_hdcp_flags_t : int32_t
    {                                            
        hdcp_flags_reserved = -0x2,                // WDK 10
        hdcp_repeater =       0x1,                 // WDK 10
    };                                           
};
