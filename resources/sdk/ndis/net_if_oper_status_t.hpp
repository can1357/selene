#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NET_IF_OPER_STATUS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class net_if_oper_status_t : int32_t
    {                                        
        up =               0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        down =             0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        testing =          0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unknown =          0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dormant =          0x5,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_present =      0x6,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lower_layer_down = 0x7,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
