#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timespec_t.start.hpp"
namespace win
{
    // [struct timespec]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timespec_t        
    {                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                   
        _m00 int64_t tv_sec;   //{ +0x0000    +0x0000    +0x0000    } | .tv_sec
        _m01 int32_t tv_nsec;  //{ +0x0008    +0x0008    +0x0008    } | .tv_nsec
                             
        SDK_MAGIC_PROPERTIES( "timespec.$", 0x10, true, 0x59999c99ebf477d0 );        
        SDK_FIXED_SIZE( timespec_t, 0x10 );        
    };                       
};
#include "magic/timespec_t.end.hpp"
SDK_VERIFY( struct win::timespec_t, 0x10 );
