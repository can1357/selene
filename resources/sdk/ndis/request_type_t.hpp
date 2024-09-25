#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_REQUEST_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_type_t : int32_t
    {                                  
        query_information = 0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_information =   0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_statistics =  0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        open =              0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        close =             0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        send =              0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        transfer_data =     0x6,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reset =             0x7,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generic1 =          0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generic2 =          0x9,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generic3 =          0xa,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generic4 =          0xb,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        method =            0xc,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
