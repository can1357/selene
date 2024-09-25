#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _LRPC_SYSTEM_HANDLE_MARSHAL_DIRECTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class lrpc_system_handle_marshal_direction_t : int32_t
    {                                                          
        marshal =   0x0,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmarshal = 0x1,                                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
