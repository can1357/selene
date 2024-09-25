#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_REQUEST_SEND_OPTIONS_FLAGS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_send_options_flags_t : int32_t
    {                                                
        timeout =                      0x1,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        synchronous =                  0x2,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ignore_target_state =          0x4,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        send_and_forget =              0x8,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        impersonate_client =           0x10000,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        impersonation_ignore_failure = 0x20000,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
