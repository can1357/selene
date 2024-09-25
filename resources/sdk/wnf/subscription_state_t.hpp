#pragma once
#include <sdkgen/support_library.hpp>

namespace wnf
{
    // [enum _WNF_SUBSCRIPTION_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class subscription_state_t : int32_t
    {                                        
        quiescent =        0x0,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ready_to_deliver = 0x1,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_delivery =      0x2,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        retry =            0x3,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
