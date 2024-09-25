#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/asta_incoming_call_data_t.start.hpp"
namespace win
{
    // [struct ASTAIncomingCallData]
    // => Windows 10 v1607
    //
    struct asta_incoming_call_data_t                  
    {                                                 
        // Windows 10 v1607                                
        //                                            
        _m00 uint64_t u_call_number;                    //{ +0x0000    } | .uCallNumber
        _m01 uint1_t  b_queued_in_current_kernel_wait;  //{ +0x0008@0  } | .bQueuedInCurrentKernelWait
        _m02 uint1_t  b_marked_for_timeout_handling;    //{ +0x0008@1  } | .bMarkedForTimeoutHandling
        _m03 uint64_t u_queued_tick_count;              //{ +0x0010    } | .uQueuedTickCount
        _m04 uint32_t dw_accumulated_wait_time;         //{ +0x0010    } | .dwAccumulatedWaitTime
                                                      
        SDK_MAGIC_PROPERTIES( "ASTAIncomingCallData.$", 0x0, false, 0x6ae7cc0e119d4c53 );                                
        SDK_FIXED_SIZE( asta_incoming_call_data_t, 0x18 );                                
    };                                                
};
#include "magic/asta_incoming_call_data_t.end.hpp"
SDK_VERIFY( struct win::asta_incoming_call_data_t, 0x18 );
