#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_802_11_AUTHENTICATION_MODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class _802_11_authentication_mode_t : int32_t
    {                                                 
        open =        0x0,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared =      0x1,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        auto_switch = 0x2,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wpa =         0x3,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wpapsk =      0x4,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wpa_none =    0x5,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wpa2 =        0x6,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wpa2psk =     0x7,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wpa3 =        0x8,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wpa3_ent192 = 0x8,                              // Windows 11
        wpa3sae =     0x9,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        owe =         0xa,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =         0xb,                              // Windows 10 v2004, Windows 10 v20H2
        wpa3_ent =    0xb,                              // Windows 11
        //max =       0xc,                              // Windows 11
    };                                                
};
