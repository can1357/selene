#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _DOT11_AUTH_ALGORITHM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dot11_auth_algorithm_t : int32_t
    {                                          
        algo_80211_open =       0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        algo_80211_shared_key = 0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        algo_wpa =              0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        algo_wpa_psk =          0x4,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        algo_wpa_none =         0x5,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        algo_rsna =             0x6,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        algo_rsna_psk =         0x7,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        algo_wpa3 =             0x8,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        algo_wpa3_ent_192 =     0x8,             // Windows 11
        algo_wpa3_sae =         0x9,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        algo_owe =              0xa,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        algo_wpa3_ent =         0xb,             // Windows 11
        algo_ihv_end =          0xff,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        algo_ihv_start =        0x80000000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
