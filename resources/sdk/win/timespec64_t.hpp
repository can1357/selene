#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timespec64_t.start.hpp"
namespace win
{
    // [struct _timespec64]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timespec64_t      
    {                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                   
        _m00 int64_t tv_sec;   //{ +0x0000    +0x0000    +0x0000    } | .tv_sec
        _m01 int32_t tv_nsec;  //{ +0x0008    +0x0008    +0x0008    } | .tv_nsec
                             
        SDK_MAGIC_PROPERTIES( "_timespec64.$", 0x10, true, 0x8121cd5553c8dbe );        
        SDK_FIXED_SIZE( timespec64_t, 0x10 );        
    };                       
};
#include "magic/timespec64_t.end.hpp"
SDK_VERIFY( struct win::timespec64_t, 0x10 );
