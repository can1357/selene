#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/systemtime_t.start.hpp"
namespace win
{
    // [struct _SYSTEMTIME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct systemtime_t              
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t w_year;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wYear
        _m01 uint16_t w_month;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wMonth
        _m02 uint16_t w_day_of_week;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .wDayOfWeek
        _m03 uint16_t w_day;           //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .wDay
        _m04 uint16_t w_hour;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wHour
        _m05 uint16_t w_minute;        //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .wMinute
        _m06 uint16_t w_second;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .wSecond
        _m07 uint16_t w_milliseconds;  //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .wMilliseconds
                                     
        SDK_MAGIC_PROPERTIES( "_SYSTEMTIME.$", 0x10, true, 0xcac22e01d5212107 );               
        SDK_FIXED_SIZE( systemtime_t, 0x10 );               
    };                               
};
#include "magic/systemtime_t.end.hpp"
SDK_VERIFY( struct win::systemtime_t, 0x10 );
