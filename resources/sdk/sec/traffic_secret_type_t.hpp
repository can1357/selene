#pragma once
#include <sdkgen/support_library.hpp>

namespace sec
{
    // [enum _SEC_TRAFFIC_SECRET_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class traffic_secret_type_t : int32_t
    {                                         
        none =   0x0,                           // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client = 0x1,                           // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server = 0x2,                           // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
