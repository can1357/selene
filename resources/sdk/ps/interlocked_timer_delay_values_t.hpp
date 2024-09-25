#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interlocked_timer_delay_values_t.start.hpp"
namespace ps
{
    // [union _PS_INTERLOCKED_TIMER_DELAY_VALUES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union interlocked_timer_delay_values_t 
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint30_t delay_ms;              //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .DelayMs
        _m01 uint30_t coalescing_window_ms;  //{ +0x0000@30 +0x0000@30 +0x0000@30 } | .CoalescingWindowMs
        _m02 uint1_t  new_timer_wheel;       //{ +0x0000@61 +0x0000@61 +0x0000@61 } | .NewTimerWheel
        _m03 uint1_t  retry;                 //{ +0x0000@62 +0x0000@62 +0x0000@62 } | .Retry
        _m04 uint1_t  locked;                //{ +0x0000@63 +0x0000@63 +0x0000@63 } | .Locked
        _m05 uint64_t all;                   //{ +0x0000    +0x0000    +0x0000    } | .All
                                           
        SDK_MAGIC_PROPERTIES( "_PS_INTERLOCKED_TIMER_DELAY_VALUES.$", 0x8, true, 0x3be488f71a3870d2 );                     
        SDK_FIXED_SIZE( interlocked_timer_delay_values_t, 0x8 );                     
    };                                     
};
#include "magic/interlocked_timer_delay_values_t.end.hpp"
SDK_VERIFY( union ps::interlocked_timer_delay_values_t, 0x8 );
