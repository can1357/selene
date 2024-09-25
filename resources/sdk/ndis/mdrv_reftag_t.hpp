#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_MDRV_REFTAG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mdrv_reftag_t : uint8_t
    {                                 
        imdeinit =       0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removingmp =     0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        miniport =       0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ioworkitem =     0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ioworkitemc =    0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notifymini =     0x5,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mprefh =         0x6,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mprefn =         0x7,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mpreft =         0x8,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        checkpt =        0x9,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timerobjdpc =    0xa,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        timerdpcx =      0xb,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        number_of_tags = 0xc,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
