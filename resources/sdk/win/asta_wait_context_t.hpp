#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace tag { struct s_ole_tls_data_t; }

#include "magic/asta_wait_context_t.start.hpp"
namespace win
{
    struct asta_state_t;
    class c_com_apartment_t;
    class asta_wait_context_t;

    // [class ASTAWaitContext]
    // => Windows 10 v1607
    //
    class asta_wait_context_t                                                                                    
    {                                                                                                            
        // Windows 10 v1607                                                                                      
        //                                                                                                       
        _m00 struct tag::s_ole_tls_data_t const*   p_tls;                                                          //{ +0x0000    } | ._pTls
        _m01 class win::asta_wait_context_t const* p_previous_wait_context;                                        //{ +0x0008    } | ._pPreviousWaitContext
        _m02 uint2_t                               blocking_reason;                                                //{ +0x0010@0  } | ._blockingReason
        _m03 uint2_t                               window_message_dispatch_behavior;                               //{ +0x0010@2  } | ._windowMessageDispatchBehavior
        _m04 const uint32_t                        dw_thread_id_waiting_for;                                       //{ +0x0014    } | ._dwThreadIdWaitingFor
        _m05 const uint64_t                        u_start_tick_count;                                             //{ +0x0018    } | ._uStartTickCount
        _m06 uint1_t                               b_all_waits_are_alertable;                                      //{ +0x0020@0  } | ._bAllWaitsAreAlertable
        _m07 uint1_t                               b_dispatches_all_calls;                                         //{ +0x0020@1  } | ._bDispatchesAllCalls
        _m08 uint1_t                               b_waited_at_least_once;                                         //{ +0x0020@2  } | ._bWaitedAtLeastOnce
        _m09 uint1_t                               b_saw_input_or_paint_message_in_this_limited_dispatch_context;  //{ +0x0020@3  } | ._bSawInputOrPaintMessageInThisLimitedDispatchContext
        _m10 uint1_t                               b_dropped_input_message;                                        //{ +0x0020@4  } | ._bDroppedInputMessage
        _m11 uint1_t                               b_reported_dropped_keyboard;                                    //{ +0x0020@5  } | ._bReportedDroppedKeyboard
        _m12 uint1_t                               b_reported_dropped_mouse;                                       //{ +0x0020@6  } | ._bReportedDroppedMouse
        _m13 uint1_t                               b_reported_dropped_queue_sync;                                  //{ +0x0020@7  } | ._bReportedDroppedQueueSync
        _m14 const struct nt::guid_t               logical_thread_id;                                              //{ +0x0024    } | ._logicalThreadId
        _m15 class win::c_com_apartment_t&         apartment;                                                      //{ +0x0038    } | ._apartment
        _m16 struct win::asta_state_t&             state;                                                          //{ +0x0040    } | ._state
        _m17 uint32_t                              dw_accumulated_wait_time;                                       //{ +0x0048    } | ._dwAccumulatedWaitTime
                                                                                                                 
        SDK_MAGIC_PROPERTIES( "ASTAWaitContext.$", 0x0, false, 0xba901c452d43ef86 );                                                              
        SDK_FIXED_SIZE( asta_wait_context_t, 0x50 );                                                              
    };                                                                                                           
};
#include "magic/asta_wait_context_t.end.hpp"
SDK_VERIFY( class win::asta_wait_context_t, 0x50 );
