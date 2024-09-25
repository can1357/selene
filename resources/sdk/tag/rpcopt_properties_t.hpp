#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagRPCOPT_PROPERTIES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rpcopt_properties_t : int32_t
    {                                       
        rpctimeout =      0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        server_locality = 0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved1 =       0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved2 =       0x5,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved3 =       0x8,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved4 =       0x10,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
