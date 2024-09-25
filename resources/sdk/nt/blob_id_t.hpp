#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _BLOB_ID]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class blob_id_t : int32_t
    {                             
        unknown =          0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        connection_info =  0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        message =          0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        security_context = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        section =          0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        region =           0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        view =             0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserve =          0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        direct_transfer =  0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        handle_data =      0x9,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_id =           0xa,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
