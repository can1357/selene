#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [enum _WHEA_ERROR_SOURCE_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class error_source_type_t : int32_t
    {                                       
        mce =            0x0,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cmc =            0x1,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cpe =            0x2,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nmi =            0x3,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pc_ie =          0x4,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generic =        0x5,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        init =           0x6,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        boot =           0x7,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sci_generic =    0x8,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ipfmca =         0x9,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ipfcmc =         0xa,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ipfcpe =         0xb,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        generic_v2 =     0xc,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sci_generic_v2 = 0xd,                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bmc =            0xe,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =          0xe,                 // Windows 10 v1607
        pmem =           0xf,                 // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_driver =  0x10,                // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =            0x11,                // WDK 10, Windows 10 v2004, Windows 10 v20H2
        sea =            0x11,                // Windows 11
        sei =            0x12,                // Windows 11
        //max =          0x13,                // Windows 11
    };                                      
};
