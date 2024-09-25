#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_GFP_TABLE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gfp_table_type_t : int32_t
    {                                    
        undefined =           0x0,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wildcard_ingress =    0x1,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wildcard_egress =     0x2,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        exact_match_ingress = 0x3,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        exact_match_egress =  0x4,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        packet_direct =       0x5,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                 0x6,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
