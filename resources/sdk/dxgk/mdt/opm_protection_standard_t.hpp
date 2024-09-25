#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_PROTECTION_STANDARD]
    //  WDK 10
    //
    enum class opm_protection_standard_t : int32_t
    {                                             
        other =               -0x80000000,          // WDK 10
        none =                0x0,                  // WDK 10
        iec61880_525i =       0x1,                  // WDK 10
        iec61880_2_525i =     0x2,                  // WDK 10
        iec62375_625p =       0x4,                  // WDK 10
        eia608b_525 =         0x8,                  // WDK 10
        en300294_625i =       0x10,                 // WDK 10
        cea805a_typea_525p =  0x20,                 // WDK 10
        cea805a_typea_750p =  0x40,                 // WDK 10
        cea805a_typea_1125i = 0x80,                 // WDK 10
        cea805a_typeb_525p =  0x100,                // WDK 10
        cea805a_typeb_750p =  0x200,                // WDK 10
        cea805a_typeb_1125i = 0x400,                // WDK 10
        aribtrb15_525i =      0x800,                // WDK 10
        aribtrb15_525p =      0x1000,               // WDK 10
        aribtrb15_750p =      0x2000,               // WDK 10
        aribtrb15_1125i =     0x4000,               // WDK 10
    };                                            
};
