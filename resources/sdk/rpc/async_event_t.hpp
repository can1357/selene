#pragma once
#include <sdkgen/support_library.hpp>

namespace rpc
{
    // [enum _RPC_ASYNC_EVENT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class async_event_t : int32_t
    {                                 
        call_complete =     0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        send_complete =     0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        receive_complete =  0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_disconnect = 0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_cancel =     0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
