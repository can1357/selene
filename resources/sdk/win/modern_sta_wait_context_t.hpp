#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace tag { struct s_ole_tls_data_t; }

#include "magic/modern_sta_wait_context_t.start.hpp"
namespace win
{
    class c_com_apartment_t;
    class modern_sta_state_t;
    class modern_sta_wait_context_t;

    // [class ModernSTAWaitContext]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class modern_sta_wait_context_t                                                                                    
    {                                                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                              
        //                                                                                                             
        _m00 struct tag::s_ole_tls_data_t const*         p_tls;                                                          //{ +0x0000    +0x0000    +0x0000    } | ._pTls
        _m01 class win::modern_sta_wait_context_t const* p_previous_wait_context;                                        //{ +0x0008    +0x0008    +0x0008    } | ._pPreviousWaitContext
        _m02 uint2_t                                     blocking_reason;                                                //{ +0x0010@0  +0x0010@0  +0x0010@0  } | ._blockingReason
        _m03 uint2_t                                     window_message_dispatch_behavior;                               //{ +0x0010@2  +0x0010@2  +0x0010@2  } | ._windowMessageDispatchBehavior
        _m04 const uint32_t                              dw_thread_id_waiting_for;                                       //{ +0x0014    +0x0014    +0x0014    } | ._dwThreadIdWaitingFor
        _m05 const uint64_t                              start_time;                                                     //{ +0x0018    +0x0018    +0x0018    } | ._startTime
        _m06 volatile const uint64_t                     start_time_tick_count;                                          //{ +0x0020    +0x0020    +0x0020    } | ._startTimeTickCount
        _m07 uint1_t                                     b_all_waits_are_alertable;                                      //{ +0x0028@0  +0x0028@0  +0x0028@0  } | ._bAllWaitsAreAlertable
        _m08 uint1_t                                     b_dispatches_all_calls;                                         //{ +0x0028@1  +0x0028@1  +0x0028@1  } | ._bDispatchesAllCalls
        _m09 uint1_t                                     b_waited_at_least_once;                                         //{ +0x0028@2  +0x0028@2  +0x0028@2  } | ._bWaitedAtLeastOnce
        _m10 uint1_t                                     b_saw_input_or_paint_message_in_this_limited_dispatch_context;  //{ +0x0028@3  +0x0028@3  +0x0028@3  } | ._bSawInputOrPaintMessageInThisLimitedDispatchContext
        _m11 uint1_t                                     b_dropped_input_message;                                        //{ +0x0028@4  +0x0028@4  +0x0028@4  } | ._bDroppedInputMessage
        _m12 uint1_t                                     b_reported_dropped_keyboard;                                    //{ +0x0028@5  +0x0028@5  +0x0028@5  } | ._bReportedDroppedKeyboard
        _m13 uint1_t                                     b_reported_dropped_mouse;                                       //{ +0x0028@6  +0x0028@6  +0x0028@6  } | ._bReportedDroppedMouse
        _m14 uint1_t                                     b_reported_dropped_queue_sync;                                  //{ +0x0028@7  +0x0028@7  +0x0028@7  } | ._bReportedDroppedQueueSync
        _m15 const struct nt::guid_t                     logical_thread_id;                                              //{ +0x002c    +0x002c    +0x002c    } | ._logicalThreadId
        _m16 class win::c_com_apartment_t&               apartment;                                                      //{ +0x0040    +0x0040    +0x0040    } | ._apartment
        _m17 class win::modern_sta_state_t&              state;                                                          //{ +0x0048    +0x0048    +0x0048    } | ._state
        _m18 uint32_t                                    dw_accumulated_wait_time;                                       //{ +0x0050    +0x0050    +0x0050    } | ._dwAccumulatedWaitTime
                                                                                                                       
        SDK_MAGIC_PROPERTIES( "ModernSTAWaitContext.$", 0x58, true, 0x1afb99c3db9f8c0a );                                                              
        SDK_FIXED_SIZE( modern_sta_wait_context_t, 0x58 );                                                              
    };                                                                                                                 
};
#include "magic/modern_sta_wait_context_t.end.hpp"
SDK_VERIFY( class win::modern_sta_wait_context_t, 0x58 );
