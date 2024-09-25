#pragma once
#include <sdkgen/support_library.hpp>
#include "execution_context_flags_t.hpp"
#include "execution_context_work_unit_knobs_t.hpp"

#include "magic/execution_context_runtime_knobs_t.start.hpp"
namespace ndis
{
    // [struct _EXECUTION_CONTEXT_RUNTIME_KNOBS]
    // => Windows 11
    //
    struct execution_context_runtime_knobs_t                                                 
    {                                                                                        
        // Windows 11                                                                        
        //                                                                                   
        _m00 uint32_t                                         size;                            //{ +0x0000    } | .Size
        _m01 enum ndis::execution_context_flags_t             flags;                           //{ +0x0004    } | .Flags
        _m02 uint32_t                                         max_time_at_dispatch;            //{ +0x0008    } | .MaxTimeAtDispatch
        _m03 uint32_t                                         dispatch_time_warning;           //{ +0x000c    } | .DispatchTimeWarning
        _m04 uint32_t                                         dispatch_time_warning_interval;  //{ +0x0010    } | .DispatchTimeWarningInterval
        _m05 uint32_t                                         dpc_watchdog_timer_threshold;    //{ +0x0014    } | .DpcWatchdogTimerThreshold
        _m06 uint32_t                                         worker_thread_priority;          //{ +0x0018    } | .WorkerThreadPriority
        _m07 struct ndis::execution_context_work_unit_knobs_t max_packets_send;                //{ +0x001c    } | .MaxPacketsSend
        _m08 struct ndis::execution_context_work_unit_knobs_t max_packets_send_complete;       //{ +0x0024    } | .MaxPacketsSendComplete
        _m09 struct ndis::execution_context_work_unit_knobs_t max_packets_receive;             //{ +0x002c    } | .MaxPacketsReceive
        _m10 struct ndis::execution_context_work_unit_knobs_t max_packets_receive_complete;    //{ +0x0034    } | .MaxPacketsReceiveComplete
                                                                                             
        SDK_MAGIC_PROPERTIES( "_EXECUTION_CONTEXT_RUNTIME_KNOBS.$", 0x0, false, 0x45f9ce3291d68873 );                               
        SDK_FIXED_SIZE( execution_context_runtime_knobs_t, 0x3c );                               
    };                                                                                       
};
#include "magic/execution_context_runtime_knobs_t.end.hpp"
SDK_VERIFY( struct ndis::execution_context_runtime_knobs_t, 0x3c );
