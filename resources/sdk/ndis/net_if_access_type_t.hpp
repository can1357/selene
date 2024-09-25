#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NET_IF_ACCESS_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class net_if_access_type_t : int32_t
    {                                        
        loopback =             0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        broadcast =            0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        point_to_point =       0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        point_to_multi_point = 0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =              0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
