#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_MPIF_REFTAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mpif_reftag_t : uint8_t
    {                                 
        imdeinit =         0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aoac =             0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        queryobj =         0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gettop =           0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        getrcvaddr =       0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        getallrcvaddr =    0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        chiib =            0x6,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        chiiuf =           0x7,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        chiic =            0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enumrcvaddr =      0x9,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        setistate =        0xa,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pminit =           0xb,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        devpowerupfail =   0xc,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        devpowerup =       0xd,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        powerdown =        0xe,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        powerdownfail =    0xf,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wmi =              0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialstate =     0x11,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        refmpguid =        0x12,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fatal_error =      0x13,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delifblock =       0x14,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //number_of_tags = 0x15,        // Windows 10 v1607
        updatechars =      0x15,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        create =           0x16,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_attributes =   0x17,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_mtype =        0x18,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_reset =     0x19,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        timestamping =     0x1a,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pktmon =           0x1b,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        swtimestamping =   0x1c,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        changemacmtu =     0x1d,        // Windows 11
        number_of_tags =   0x1d,        // Windows 10 v2004, Windows 10 v20H2
        //number_of_tags = 0x1e,        // Windows 11
    };                                
};
