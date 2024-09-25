#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ktimer_expiration_trace_t.start.hpp"
namespace nt
{
    // [struct _KTIMER_EXPIRATION_TRACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktimer_expiration_trace_t      
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t interrupt_time;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterruptTime
        _m01 int64_t  performance_counter;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PerformanceCounter
                                          
        SDK_MAGIC_PROPERTIES( "_KTIMER_EXPIRATION_TRACE.$", 0x10, true, 0x3103ca6f65795de );                    
        SDK_FIXED_SIZE( ktimer_expiration_trace_t, 0x10 );                    
    };                                    
};
#include "magic/ktimer_expiration_trace_t.end.hpp"
SDK_VERIFY( struct nt::ktimer_expiration_trace_t, 0x10 );
