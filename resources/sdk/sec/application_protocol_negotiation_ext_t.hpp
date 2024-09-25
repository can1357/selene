#pragma once
#include <sdkgen/support_library.hpp>

namespace sec
{
    // [enum _SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class application_protocol_negotiation_ext_t : int32_t
    {                                                          
        none = 0x0,                                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        npn =  0x1,                                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alpn = 0x2,                                              // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
