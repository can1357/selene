#pragma once
#include <sdkgen/support_library.hpp>

namespace image
{
    // [enum _IMAGE_POLICY_ENTRY_TYPE]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class policy_entry_type_t : int32_t
    {                                       
        none =           0x0,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _bool =          0x1,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        int8 =           0x2,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u_int8 =         0x3,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        int16 =          0x4,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u_int16 =        0x5,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        int32 =          0x6,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u_int32 =        0x7,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64 =          0x8,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        u_int64 =        0x9,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ansi_string =    0xa,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unicode_string = 0xb,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        override =       0xc,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =        0xd,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
