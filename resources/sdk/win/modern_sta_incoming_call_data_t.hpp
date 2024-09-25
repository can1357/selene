#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/modern_sta_incoming_call_data_t.start.hpp"
namespace win
{
    // [struct ModernSTAIncomingCallData]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct modern_sta_incoming_call_data_t                   
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                   
        _m00 uint64_t u_call_number;                           //{ +0x0000    +0x0000    +0x0000    } | .uCallNumber
        _m01 uint1_t  b_queued_in_current_kernel_wait;         //{ +0x0008@0  +0x0008@0  +0x0008@0  } | .bQueuedInCurrentKernelWait
        _m02 uint1_t  b_would_have_timed_out_if_not_extended;  //{ +0x0008@1  +0x0008@1  +0x0008@1  } | .bWouldHaveTimedOutIfNotExtended
        _m03 uint1_t  b_marked_for_timeout_handling;           //{ +0x0008@2  +0x0008@2  +0x0008@2  } | .bMarkedForTimeoutHandling
        _m04 uint32_t dw_accumulated_wait_time;                //{ +0x000c    +0x000c    +0x000c    } | .dwAccumulatedWaitTime
        _m05 uint64_t queued_time;                             //{ +0x0010    +0x0010    +0x0010    } | .queuedTime
        _m06 uint64_t queued_tick_count;                       //{ +0x0018    +0x0018    +0x0018    } | .queuedTickCount
                                                             
        SDK_MAGIC_PROPERTIES( "ModernSTAIncomingCallData.$", 0x20, true, 0xedc2fefb8b64d556 );                                       
        SDK_FIXED_SIZE( modern_sta_incoming_call_data_t, 0x20 );                                       
    };                                                       
};
#include "magic/modern_sta_incoming_call_data_t.end.hpp"
SDK_VERIFY( struct win::modern_sta_incoming_call_data_t, 0x20 );
