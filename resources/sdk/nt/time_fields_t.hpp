#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/time_fields_t.start.hpp"
namespace nt
{
    // [struct _TIME_FIELDS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct time_fields_t          
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 int16_t year;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Year
        _m01 int16_t month;         //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Month
        _m02 int16_t day;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Day
        _m03 int16_t hour;          //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Hour
        _m04 int16_t minute;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Minute
        _m05 int16_t second;        //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .Second
        _m06 int16_t milliseconds;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Milliseconds
        _m07 int16_t weekday;       //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .Weekday
                                  
        SDK_NONVOL_PROPERTIES( "_TIME_FIELDS.$", 0x10, true, 0x3b5cd53286adc6ba );             
        SDK_FIXED_SIZE( time_fields_t, 0x10 );             
    };                            
};
#include "magic/time_fields_t.end.hpp"
SDK_VERIFY( struct nt::time_fields_t, 0x10 );
