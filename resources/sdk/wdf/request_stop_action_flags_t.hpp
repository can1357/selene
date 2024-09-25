#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_REQUEST_STOP_ACTION_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_stop_action_flags_t : int32_t
    {                                               
        action_invalid =     0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        action_suspend =     0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        action_purge =       0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        request_cancelable = 0x10000000,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
