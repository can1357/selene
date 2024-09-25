#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_IP_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ip_type_t : int32_t         
    {                                      
        ip_type_default =           0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip_type_i_pv4 =             0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip_type_i_pv6 =             0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip_type_ipv4v6 =            0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ip_type_xlat =              0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        session_type_ethernet =     0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        session_type_unstructured = 0x6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        session_type_max =          0x7,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
