#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_RSS_PROFILE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rss_profile_t : int32_t
    {                                 
        closest =        0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        closest_static = 0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        numa =           0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        numa_static =    0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        conservative =   0x5,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =        0x6,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
