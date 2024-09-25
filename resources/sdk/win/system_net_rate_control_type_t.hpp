#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SYSTEM_NET_RATE_CONTROL_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class system_net_rate_control_type_t : int32_t
    {                                                  
        set =   0x0,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        quota = 0x1,                                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
