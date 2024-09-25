#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_FPNP_REFTAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fpnp_reftag_t : uint8_t
    {                                 
        fcanceloid =       0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pcanceloid =       0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pcanceldoid =      0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fcanceldoid =      0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        docanceldoid =     0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dpnpnotifyf =      0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dpnpnotifym =      0x6,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dpnpnotifyt =      0x7,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fstatus =          0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mstats =           0x9,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        npnpevent =        0xa,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        iftop =            0xb,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        oidqueued =        0xc,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fsyncoid =         0xd,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        psyncoid =         0xe,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        oidpending =       0xf,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        doidpending =      0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        oidsearch =        0x11,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        doidsearch =       0x12,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        completeoid =      0x13,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        doidcomplete =     0x14,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        predetach =        0x15,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        apirestart =       0x16,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //number_of_tags = 0x17,        // Windows 10 v1607
        synchronousoid =   0x17,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pktmon =           0x18,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        number_of_tags =   0x19,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
