#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagRpcCallClientLocality]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rpc_call_client_locality_t : int32_t
    {                                              
        invalid =                 0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        local =                   0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remote =                  0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        client_unknown_locality = 0x3,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
