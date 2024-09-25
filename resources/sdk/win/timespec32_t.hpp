#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timespec32_t.start.hpp"
namespace win
{
    // [struct _timespec32]
    // => Windows 11
    //
    struct timespec32_t      
    {                        
        // Windows 11        
        //                   
        _m00 int32_t tv_sec;   //{ +0x0000    } | .tv_sec
        _m01 int32_t tv_nsec;  //{ +0x0004    } | .tv_nsec
                             
        SDK_MAGIC_PROPERTIES( "_timespec32.$", 0x0, false, 0xff49d151d613543a );        
        SDK_FIXED_SIZE( timespec32_t, 0x8 );        
    };                       
};
#include "magic/timespec32_t.end.hpp"
SDK_VERIFY( struct win::timespec32_t, 0x8 );
