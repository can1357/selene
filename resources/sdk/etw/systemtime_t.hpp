#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/systemtime_t.start.hpp"
namespace etw
{
    // [struct _ETW_SYSTEMTIME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct systemtime_t            
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint16_t year;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Year
        _m01 uint16_t month;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Month
        _m02 uint16_t day_of_week;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DayOfWeek
        _m03 uint16_t day;           //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Day
        _m04 uint16_t hour;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Hour
        _m05 uint16_t minute;        //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Minute
        _m06 uint16_t second;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Second
        _m07 uint16_t milliseconds;  //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .Milliseconds
                                   
        SDK_MAGIC_PROPERTIES( "_ETW_SYSTEMTIME.$", 0x10, true, 0xb4cf1b6808b6e35 );             
        SDK_FIXED_SIZE( systemtime_t, 0x10 );             
    };                             
};
#include "magic/systemtime_t.end.hpp"
SDK_VERIFY( struct etw::systemtime_t, 0x10 );
