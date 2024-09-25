#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _CLI_ASYNC_CALL_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cli_async_call_state_t : int32_t
    {                                          
        start =                0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        failed_synchronously = 0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notify_direct =        0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notified =             0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_completion =        0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        completed =            0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
