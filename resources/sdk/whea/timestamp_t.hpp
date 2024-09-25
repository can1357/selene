#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timestamp_t.start.hpp"
namespace whea
{
    // [union _WHEA_TIMESTAMP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union timestamp_t                 
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 uint8_t seconds;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Seconds
        _m01 uint8_t minutes;           //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Minutes
        _m02 uint8_t hours;             //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Hours
        _m03 uint1_t precise;           //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .Precise
        _m04 uint8_t day;               //{ +0x0000@32 +0x0000@32 +0x0000@32 +0x0000@32 +0x0000@32 } | .Day
        _m05 uint8_t month;             //{ +0x0000@40 +0x0000@40 +0x0000@40 +0x0000@40 +0x0000@40 } | .Month
        _m06 uint8_t year;              //{ +0x0000@48 +0x0000@48 +0x0000@48 +0x0000@48 +0x0000@48 } | .Year
        _m07 uint8_t century;           //{ +0x0000@56 +0x0000@56 +0x0000@56 +0x0000@56 +0x0000@56 } | .Century
        _m08 int64_t as_large_integer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsLARGE_INTEGER
                                      
        SDK_NONVOL_PROPERTIES( "_WHEA_TIMESTAMP.$", 0x8, true, 0xc4c0be72f59b801 );                 
        SDK_FIXED_SIZE( timestamp_t, 0x8 );                 
    };                                
};
#include "magic/timestamp_t.end.hpp"
SDK_VERIFY( union whea::timestamp_t, 0x8 );
