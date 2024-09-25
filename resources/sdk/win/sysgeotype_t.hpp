#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SYSGEOTYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sysgeotype_t : int32_t
    {                                
        nation =            0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        latitude =          0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        longitude =         0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iso2 =              0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iso3 =              0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rfc1766 =           0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lcid =              0x7,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        friendlyname =      0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        officialname =      0x9,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timezones =         0xa,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        officiallanguages = 0xb,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iso_un_number =     0xc,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parent =            0xd,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dialingcode =       0xe,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        currencycode =      0xf,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        currencysymbol =    0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        name =              0x11,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        id =                0x12,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
