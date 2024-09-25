#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_PORT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class port_type_t : int32_t   
    {                                  
        type_undefined =        0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_bridge =           0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_ras_connection =   0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type8021x_supplicant =  0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_ndis_im_platform = 0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_max =              0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
