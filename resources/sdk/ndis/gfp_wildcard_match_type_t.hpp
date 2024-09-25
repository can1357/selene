#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_GFP_WILDCARD_MATCH_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gfp_wildcard_match_type_t : int32_t
    {                                             
        undefined =  0x0,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        equal =      0x1,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mask_equal = 0x2,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_range =   0x3,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =        0x4,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
