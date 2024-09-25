#pragma once
#include <sdkgen/support_library.hpp>
#include "work_queue_item_t.hpp"
#include "../etw/periodic_timer_state_t.hpp"
#include "periodic_capture_state_guids_t.hpp"

namespace ex { struct timer_t; }

#include "magic/periodic_capture_state_context_t.start.hpp"
namespace nt
{
    // [struct PERIODIC_CAPTURE_STATE_CONTEXT]
    // => Windows 11
    //
    struct periodic_capture_state_context_t                                    
    {                                                                          
        // Windows 11                                                          
        //                                                                     
        _m00 int64_t                                   relative_timer_due_time;  //{ +0x0000    } | .RelativeTimerDueTime
        _m01 struct ex::timer_t*                       timer;                    //{ +0x0008    } | .Timer
        _m02 struct nt::periodic_capture_state_guids_t guids;                    //{ +0x0010    } | .Guids
        _m03 struct nt::work_queue_item_t              work_item;                //{ +0x0020    } | .WorkItem
        _m04 enum etw::periodic_timer_state_t          timer_state;              //{ +0x0040    } | .TimerState
                                                                               
        SDK_MAGIC_PROPERTIES( "PERIODIC_CAPTURE_STATE_CONTEXT.$", 0x0, false, 0x454754e5805a1286 );                        
        SDK_FIXED_SIZE( periodic_capture_state_context_t, 0x48 );                        
    };                                                                         
};
#include "magic/periodic_capture_state_context_t.end.hpp"
SDK_VERIFY( struct nt::periodic_capture_state_context_t, 0x48 );
