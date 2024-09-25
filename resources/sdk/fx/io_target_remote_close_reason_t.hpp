#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxIoTargetRemoteCloseReason]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_target_remote_close_reason_t : int32_t
    {                                                   
        query_remove = 0x1,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        plain_close =  0x2,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _delete =      0x3,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
