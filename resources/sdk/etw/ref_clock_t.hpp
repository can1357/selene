#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ref_clock_t.start.hpp"
namespace etw
{
    // [struct _ETW_REF_CLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ref_clock_t                
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 int64_t start_time;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartTime
        _m01 int64_t start_perf_clock;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StartPerfClock
                                      
        SDK_MAGIC_PROPERTIES( "_ETW_REF_CLOCK.$", 0x10, true, 0xbf6843a7ba174d10 );                 
        SDK_FIXED_SIZE( ref_clock_t, 0x10 );                 
    };                                
};
#include "magic/ref_clock_t.end.hpp"
SDK_VERIFY( struct etw::ref_clock_t, 0x10 );
