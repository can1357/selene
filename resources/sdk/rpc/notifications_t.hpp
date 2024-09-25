#pragma once
#include <sdkgen/support_library.hpp>

namespace rpc
{
    // [enum _RPC_NOTIFICATIONS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class notifications_t : int32_t
    {                                   
        call_none =         0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_disconnect = 0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        call_cancel =       0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
