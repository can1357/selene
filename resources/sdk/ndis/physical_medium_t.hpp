#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_PHYSICAL_MEDIUM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class physical_medium_t : int32_t
    {                                     
        medium_unspecified =    0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_wireless_lan =   0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_cable_modem =    0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_phone_line =     0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_power_line =     0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_dsl =            0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_fibre_channel =  0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium1394 =            0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_wireless_wan =   0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_native802_11 =   0x9,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_bluetooth =      0xa,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_infiniband =     0xb,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_wi_max =         0xc,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_uwb =            0xd,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium802_3 =           0xe,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium802_5 =           0xf,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_irda =           0x10,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_wired_wan =      0x11,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_wired_co_wan =   0x12,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_other =          0x13,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_native802_15_4 = 0x14,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        medium_max =            0x15,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
