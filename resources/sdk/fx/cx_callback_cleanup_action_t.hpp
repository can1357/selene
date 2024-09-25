#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxCxCallbackCleanupAction]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cx_callback_cleanup_action_t : uint8_t
    {                                                
        or_client_failure = 0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failure =           0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
