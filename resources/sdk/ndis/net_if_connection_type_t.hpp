#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NET_IF_CONNECTION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class net_if_connection_type_t : int32_t
    {                                            
        dedicated = 0x1,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        passive =   0x2,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        demand =    0x3,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =   0x4,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
