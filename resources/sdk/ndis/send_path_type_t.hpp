#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_SEND_PATH_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class send_path_type_t : int32_t  
    {                                      
        ndis_filter_send_path =     0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_no_filter_send_path =  0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis5_no_filter_send_path = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ndis_fake_send_path =       0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
