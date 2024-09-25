#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NET_IF_ADMIN_STATUS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class net_if_admin_status_t : int32_t
    {                                         
        up =      0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        down =    0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        testing = 0x3,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
