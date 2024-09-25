#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../rtl/srwlock_t.hpp"
#include "blocking_reason_t.hpp"
#include "i_message_param_list_t.hpp"
#include "asta_incoming_call_list_t.hpp"
#include "modern_sta_incoming_call_list_t.hpp"

namespace tag { struct s_ole_tls_data_t; }

#include "magic/asta_state_t.start.hpp"
namespace win
{
    // [struct ASTAState]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct asta_state_t                                                                               
    {                                                                                                 
        using dispatchable_calls_t = sdk::variant<class win::asta_incoming_call_list_t, class win::modern_sta_incoming_call_list_t>;                                                    
        using queued_calls_t =       sdk::variant<class win::asta_incoming_call_list_t, class win::modern_sta_incoming_call_list_t>;                                                    
                                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
        //                                                                                            
        _m000 struct rtl::srwlock_t               lock;                                                 //{ +0x0000    +0x0038    +0x0038    +0x0038    } | .lock
        _m001 uint1_t                             b_in_wait_context;                                    //{ +0x0008@0  +0x0040@0  +0x0040@0  +0x0040@0  } | .bInWaitContext
        _m002 uint1_t                             b_in_kernel_wait;                                     //{ +0x0008@1  +0x0040@1  +0x0040@1  +0x0040@1  } | .bInKernelWait
        _m003 uint1_t                             b_handling_priority_events;                           //{ +0x0008@2  +0x0040@2  +0x0040@2  +0x0040@2  } | .bHandlingPriorityEvents
        _m004 uint1_t                             b_wait_context_dispatches_all_calls;                  //{ +0x0008@3  +0x0040@3  +0x0040@3  +0x0040@3  } | .bWaitContextDispatchesAllCalls
        _m005 uint1_t                             b_saved_logical_thread_id_for_in_doubt_call_info;     //{ +0x0008@4  +0x0040@4  +0x0040@4  +0x0040@4  } | .bSavedLogicalThreadIdForInDoubtCallInfo
        _m006 enum win::blocking_reason_t         blocking_reason;                                      //{ +0x000c    +0x0044    +0x0044    +0x0044    } | .blockingReason
        _m007 struct nt::guid_t                   outgoing_call_logical_thread_id;                      //{ +0x0010    +0x0048    +0x0048    +0x0048    } | .outgoingCallLogicalThreadId
        _m008 uint64_t                            u_call_take_a_number;                                 //{ +0x0020    +0x0058    +0x0058    +0x0058    } | .uCallTakeANumber
        _m009 class win::i_message_param_list_t   priority_events;                                      //{ +0x0028    +0x0060    +0x0060    +0x0060    } | .priorityEvents
        _m010 class win::i_message_param_list_t   deferred_outgoing_rem_release_calls;                  //{ +0x0038    +0x0070    +0x0070    +0x0070    } | .deferredOutgoingRemReleaseCalls
        _m011 class win::i_message_param_list_t   winrt_async_responses;                                //{ +0x0048    +0x0080    +0x0080    +0x0080    } | .winrtAsyncResponses
        _m012 class win::i_message_param_list_t   winrt_async_server_continuation_messages;             //{ +0x0058    +0x0090    +0x0090    +0x0090    } | .winrtAsyncServerContinuationMessages
        _m013 dispatchable_calls_t                dispatchable_calls;                                   //{ +0x0068    +0x00a0    +0x00a0    +0x00a0    } | .dispatchableCalls
        _m014 queued_calls_t                      queued_calls;                                         //{ +0x0078    +0x00b0    +0x00b0    +0x00b0    } | .queuedCalls
        _m015 uint64_t                            u_queued_calls_sequence;                              //{ +0x0088    +0x00c0    +0x00c0    +0x00c0    } | .uQueuedCallsSequence
        _m016 uint32_t                            dw_cached_next_queued_call_timeout;                   //{ +0x0090    +0x00c8    +0x00c8    +0x00c8    } | .dwCachedNextQueuedCallTimeout
        _m017 uint64_t                            u_cached_next_queued_call_timeout_sequence;           //{ +0x0098    +0x00d0    +0x00d0    +0x00d0    } | .uCachedNextQueuedCallTimeoutSequence
        _m018 uint32_t                            dw_current_kernel_wait_timeout;                       //{ +0x00a0    +0x00d8    +0x00d8    +0x00d8    } | .dwCurrentKernelWaitTimeout
        _m019 struct nt::guid_t                   guid_saved_logical_thread_id_for_in_doubt_call_info;  //{ +0x00b0    +0x0100    +0x0100    +0x0100    } | .guidSavedLogicalThreadIdForInDoubtCallInfo
                                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
        //                                                                                            
        _m020 struct tag::s_ole_tls_data_t const* p_tls;                                                //{ +0x0008    +0x0008    +0x0008    } | ._pTls
        _m021 const uint32_t                      dw_thread_id;                                         //{ +0x0030    +0x0030    +0x0030    } | .dwThreadId
        _m022 uint64_t                            current_kernel_wait_start_time;                       //{ +0x00e0    +0x00e0    +0x00e0    } | .currentKernelWaitStartTime
        _m023 uint32_t                            pending_git_registration_count;                       //{ +0x00f8    +0x00f8    +0x00f8    } | ._pendingGitRegistrationCount
        _m024 bool                                waiting_for_pending_git_registrations;                //{ +0x00fc    +0x00fc    +0x00fc    } | ._waitingForPendingGitRegistrations
                                                                                                      
        // Windows 10 v1607                                                                           
        //                                                                                            
        _m025 uint64_t                            u_current_kernel_wait_initial_tick_count;             //{ +0x00a8    } | .uCurrentKernelWaitInitialTickCount
                                                                                                      
        SDK_MAGIC_PROPERTIES( "ASTAState.$", 0x110, true, 0xec61c5a7936b5525 );                                                    
        SDK_DYNAMIC_SIZE( asta_state_t );                                                             
    };                                                                                                
};
#include "magic/asta_state_t.end.hpp"
