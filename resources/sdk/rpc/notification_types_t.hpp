#pragma once
#include <sdkgen/support_library.hpp>

namespace rpc
{
    // [enum _RPC_NOTIFICATION_TYPES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class notification_types_t : int32_t
    {                                        
        none =     0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event =    0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        apc =      0x2,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ioc =      0x3,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hwnd =     0x4,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        callback = 0x5,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
