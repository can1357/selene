#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_IF_REFTAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class if_reftag_t : uint8_t
    {                               
        _register =        0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        getii =            0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        topgetii =         0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        getall =           0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        topgetall =        0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set =              0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enumall =          0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        topenumall =       0x7,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        getrcvaddr =       0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        getallrcvaddr =    0x9,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        asyncchange =      0xa,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        chalias =          0xb,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport =         0xc,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        setdescr =         0xd,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //update =         0xe,       // Windows 10 v1607
        updatechars =      0xe,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //number_of_tags = 0xf,       // Windows 10 v1607
        update =           0xf,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timestamping =     0x10,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        number_of_tags =   0x11,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
