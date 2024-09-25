#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _DOT11_CIPHER_ALGORITHM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dot11_cipher_algorithm_t : int32_t
    {                                            
        none =          0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wep40 =         0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tkip =          0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ccmp =          0x4,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wep104 =        0x5,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bip =           0x6,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gcmp =          0x8,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gcmp_256 =      0x9,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ccmp_256 =      0xa,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bip_gmac_128 =  0xb,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bip_gmac_256 =  0xc,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bip_cmac_256 =  0xd,                       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ihv_end =       0xff,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rsn_use_group = 0x100,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wpa_use_group = 0x100,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wep =           0x101,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ihv_start =     0x80000000,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
