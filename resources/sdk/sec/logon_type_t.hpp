#pragma once
#include <sdkgen/support_library.hpp>

namespace sec
{
    // [enum _SECURITY_LOGON_TYPE]
    //  WDK 10
    //
    enum class logon_type_t : int32_t      
    {                                      
        undefined_logon_type =      0x0,     // WDK 10
        interactive =               0x2,     // WDK 10
        network =                   0x3,     // WDK 10
        batch =                     0x4,     // WDK 10
        service =                   0x5,     // WDK 10
        proxy =                     0x6,     // WDK 10
        unlock =                    0x7,     // WDK 10
        network_cleartext =         0x8,     // WDK 10
        new_credentials =           0x9,     // WDK 10
        remote_interactive =        0xa,     // WDK 10
        cached_interactive =        0xb,     // WDK 10
        cached_remote_interactive = 0xc,     // WDK 10
        cached_unlock =             0xd,     // WDK 10
    };                                     
};
