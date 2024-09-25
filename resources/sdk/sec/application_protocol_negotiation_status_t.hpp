#pragma once
#include <sdkgen/support_library.hpp>

namespace sec
{
    // [enum _SEC_APPLICATION_PROTOCOL_NEGOTIATION_STATUS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class application_protocol_negotiation_status_t : int32_t
    {                                                             
        none =                 0x0,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        success =              0x1,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
        selected_client_only = 0x2,                                 // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                            
};
