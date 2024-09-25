#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct counted_reason_context_t; }

#include "magic/timer_set_coalescable_timer_info_t.start.hpp"
namespace win
{
    // [struct _TIMER_SET_COALESCABLE_TIMER_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct timer_set_coalescable_timer_info_t                                 
    {                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                    
        _m00 int64_t                                        due_time;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DueTime
        _m01 sdk::function<void(void*, uint32_t, int32_t)>* timer_apc_routine;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TimerApcRoutine
        _m02 void*                                          timer_context;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TimerContext
        _m03 struct nt::counted_reason_context_t*           wake_context;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .WakeContext
        _m04 uint32_t                                       period;             //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Period
        _m05 uint32_t                                       tolerable_delay;    //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .TolerableDelay
        _m06 uint8_t*                                       previous_state;     //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .PreviousState
                                                                              
        SDK_NONVOL_PROPERTIES( "_TIMER_SET_COALESCABLE_TIMER_INFO.$", 0x30, true, 0x6f48184107fd3ab2 );                  
        SDK_FIXED_SIZE( timer_set_coalescable_timer_info_t, 0x30 );                  
    };                                                                        
};
#include "magic/timer_set_coalescable_timer_info_t.end.hpp"
SDK_VERIFY( struct win::timer_set_coalescable_timer_info_t, 0x30 );
