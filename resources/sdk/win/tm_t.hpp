#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tm_t.start.hpp"
namespace win
{
    // [struct tm]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tm_t               
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                    
        _m00 int32_t tm_sec;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tm_sec
        _m01 int32_t tm_min;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .tm_min
        _m02 int32_t tm_hour;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .tm_hour
        _m03 int32_t tm_mday;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .tm_mday
        _m04 int32_t tm_mon;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .tm_mon
        _m05 int32_t tm_year;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .tm_year
        _m06 int32_t tm_wday;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .tm_wday
        _m07 int32_t tm_yday;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .tm_yday
        _m08 int32_t tm_isdst;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .tm_isdst
                              
        SDK_MAGIC_PROPERTIES( "tm.$", 0x24, true, 0x59aa51927a3b7af1 );         
        SDK_FIXED_SIZE( tm_t, 0x24 );         
    };                        
};
#include "magic/tm_t.end.hpp"
SDK_VERIFY( struct win::tm_t, 0x24 );
