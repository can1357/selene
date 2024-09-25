#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/profile_interval_t.start.hpp"
namespace trace
{
    // [struct _TRACE_PROFILE_INTERVAL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct profile_interval_t  
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t source;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Source
        _m01 uint32_t interval;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Interval
                               
        SDK_MAGIC_PROPERTIES( "_TRACE_PROFILE_INTERVAL.$", 0x8, true, 0x63c381c8adaca66c );         
        SDK_FIXED_SIZE( profile_interval_t, 0x8 );         
    };                         
};
#include "magic/profile_interval_t.end.hpp"
SDK_VERIFY( struct trace::profile_interval_t, 0x8 );
