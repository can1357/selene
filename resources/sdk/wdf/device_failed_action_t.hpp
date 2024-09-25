#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_DEVICE_FAILED_ACTION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_failed_action_t : int32_t
    {                                          
        undefined =       0x0,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attempt_restart = 0x1,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_restart =      0x2,                   // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
