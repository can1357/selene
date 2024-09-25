#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../rtl/srwlock_t.hpp"
#include "blocking_reason_t.hpp"
#include "i_message_param_list_t.hpp"
#include "modern_sta_incoming_call_list_t.hpp"

namespace tag { struct s_ole_tls_data_t; }

#include "magic/bridge_sta_state_t.start.hpp"
namespace win
{
    // [class BridgeSTAState]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class bridge_sta_state_t                                                                             
    {                                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
        //                                                                                               
        _m00 struct tag::s_ole_tls_data_t const*        p_tls;                                             //{ +0x0008    +0x0008    +0x0008    } | ._pTls
        _m01 const uint32_t                             dw_thread_id;                                      //{ +0x0030    +0x0030    +0x0030    } | .dwThreadId
        _m02 struct rtl::srwlock_t                      lock;                                              //{ +0x0038    +0x0038    +0x0038    } | .lock
        _m03 uint1_t                                    b_in_wait_context;                                 //{ +0x0040@0  +0x0040@0  +0x0040@0  } | .bInWaitContext
        _m04 uint1_t                                    b_in_kernel_wait;                                  //{ +0x0040@1  +0x0040@1  +0x0040@1  } | .bInKernelWait
        _m05 uint1_t                                    b_handling_priority_events;                        //{ +0x0040@2  +0x0040@2  +0x0040@2  } | .bHandlingPriorityEvents
        _m06 uint1_t                                    b_wait_context_dispatches_all_calls;               //{ +0x0040@3  +0x0040@3  +0x0040@3  } | .bWaitContextDispatchesAllCalls
        _m07 uint1_t                                    b_saved_logical_thread_id_for_in_doubt_call_info;  //{ +0x0040@4  +0x0040@4  +0x0040@4  } | .bSavedLogicalThreadIdForInDoubtCallInfo
        _m08 enum win::blocking_reason_t                blocking_reason;                                   //{ +0x0044    +0x0044    +0x0044    } | .blockingReason
        _m09 struct nt::guid_t                          outgoing_call_logical_thread_id;                   //{ +0x0048    +0x0048    +0x0048    } | .outgoingCallLogicalThreadId
        _m10 uint64_t                                   u_call_take_a_number;                              //{ +0x0058    +0x0058    +0x0058    } | .uCallTakeANumber
        _m11 class win::i_message_param_list_t          priority_events;                                   //{ +0x0060    +0x0060    +0x0060    } | .priorityEvents
        _m12 class win::i_message_param_list_t          deferred_outgoing_rem_release_calls;               //{ +0x0070    +0x0070    +0x0070    } | .deferredOutgoingRemReleaseCalls
        _m13 class win::i_message_param_list_t          winrt_async_responses;                             //{ +0x0080    +0x0080    +0x0080    } | .winrtAsyncResponses
        _m14 class win::i_message_param_list_t          winrt_async_server_continuation_messages;          //{ +0x0090    +0x0090    +0x0090    } | .winrtAsyncServerContinuationMessages
        _m15 class win::modern_sta_incoming_call_list_t dispatchable_calls;                                //{ +0x00a0    +0x00a0    +0x00a0    } | .dispatchableCalls
        _m16 class win::modern_sta_incoming_call_list_t queued_calls;                                      //{ +0x00b0    +0x00b0    +0x00b0    } | .queuedCalls
        _m17 uint64_t                                   u_queued_calls_sequence;                           //{ +0x00c0    +0x00c0    +0x00c0    } | .uQueuedCallsSequence
        _m18 uint32_t                                   dw_cached_next_queued_call_timeout;                //{ +0x00c8    +0x00c8    +0x00c8    } | .dwCachedNextQueuedCallTimeout
        _m19 uint64_t                                   u_cached_next_queued_call_timeout_sequence;        //{ +0x00d0    +0x00d0    +0x00d0    } | .uCachedNextQueuedCallTimeoutSequence
        _m20 uint32_t                                   dw_current_kernel_wait_timeout;                    //{ +0x00d8    +0x00d8    +0x00d8    } | .dwCurrentKernelWaitTimeout
        _m21 uint64_t                                   current_kernel_wait_start_time;                    //{ +0x00e0    +0x00e0    +0x00e0    } | .currentKernelWaitStartTime
        _m22 bool                                       asta_call_reentrancy_guard_explicitly_enabled;     //{ +0x00e8    +0x00e8    +0x00e8    } | ._astaCallReentrancyGuardExplicitlyEnabled
        _m23 uint32_t                                   incoming_winrt_async_call_count;                   //{ +0x00ec    +0x00ec    +0x00ec    } | ._incomingWinrtAsyncCallCount
                                                                                                         
        SDK_MAGIC_PROPERTIES( "BridgeSTAState.$", 0xf0, true, 0xaf2d588d721cded3 );                                                 
        SDK_FIXED_SIZE( bridge_sta_state_t, 0xf0 );                                                      
    };                                                                                                   
};
#include "magic/bridge_sta_state_t.end.hpp"
SDK_VERIFY( class win::bridge_sta_state_t, 0xf0 );
