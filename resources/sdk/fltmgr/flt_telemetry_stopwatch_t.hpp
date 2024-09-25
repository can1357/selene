#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flt_telemetry_stopwatch_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_TELEMETRY_STOPWATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_telemetry_stopwatch_t
    {                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 int64_t start_time;      //{ +0x0000    +0x0000    +0x0000    } | .StartTime
                                    
        SDK_MAGIC_PROPERTIES( "_FLT_TELEMETRY_STOPWATCH.$", 0x8, true, 0x61a6ca39e829af6c );           
        SDK_FIXED_SIZE( flt_telemetry_stopwatch_t, 0x8 );           
    };                              
};
#include "magic/flt_telemetry_stopwatch_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_telemetry_stopwatch_t, 0x8 );
