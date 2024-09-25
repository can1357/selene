#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_MEDIUM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class medium_t : int32_t     
    {                                 
        medium802_3 =         0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium802_5 =         0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_fddi =         0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_wan =          0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_local_talk =   0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_dix =          0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_arcnet_raw =   0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_arcnet878_2 =  0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_atm =          0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_wireless_wan = 0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_irda =         0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_bpc =          0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_co_wan =       0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium1394 =          0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_infini_band =  0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_tunnel =       0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_native802_11 = 0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_loopback =     0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_wi_max =       0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_ip =           0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_max =          0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
