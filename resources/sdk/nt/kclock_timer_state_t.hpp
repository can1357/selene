#pragma once
#include <sdkgen/support_library.hpp>
#include "kclock_tick_trace_t.hpp"
#include "kclock_increment_trace_t.hpp"
#include "kclock_timer_deadline_type_t.hpp"
#include "kclock_timer_deadline_entry_t.hpp"
#include "kclock_timer_one_shot_state_t.hpp"

#include "magic/kclock_timer_state_t.start.hpp"
namespace nt
{
    // [struct _KCLOCK_TIMER_STATE]
    // => Windows 11
    //
    struct kclock_timer_state_t                                                           
    {                                                                                     
        using clock_timer_entries_t =    sdk::array<struct nt::kclock_timer_deadline_entry_t, 7>;                              
        using clock_increment_traces_t = sdk::array<struct nt::kclock_increment_trace_t, 16>;                              
                                                                                          
        // Windows 11                                                                     
        //                                                                                
        _m00 uint64_t                                       next_tick_due_time;             //{ +0x0000    } | .NextTickDueTime
        _m01 uint32_t                                       time_increment;                 //{ +0x0008    } | .TimeIncrement
        _m02 uint32_t                                       last_requested_time_increment;  //{ +0x000c    } | .LastRequestedTimeIncrement
        _m03 enum nt::kclock_timer_one_shot_state_t         one_shot_state;                 //{ +0x0010    } | .OneShotState
        _m04 enum nt::kclock_timer_deadline_type_t          expected_wake_reason;           //{ +0x0014    } | .ExpectedWakeReason
        _m05 clock_timer_entries_t                          clock_timer_entries;            //{ +0x0018    } | .ClockTimerEntries
        _m06 uint8_t                                        clock_active;                   //{ +0x0088    } | .ClockActive
        _m07 uint32_t                                       clock_tick_trace_index;         //{ +0x008c    } | .ClockTickTraceIndex
        _m08 uint32_t                                       clock_increment_trace_index;    //{ +0x0090    } | .ClockIncrementTraceIndex
        _m09 sdk::array<struct nt::kclock_tick_trace_t, 16> clock_tick_traces;              //{ +0x0098    } | .ClockTickTraces
        _m10 clock_increment_traces_t                       clock_increment_traces;         //{ +0x0318    } | .ClockIncrementTraces
                                                                                          
        SDK_MAGIC_PROPERTIES( "_KCLOCK_TIMER_STATE.$", 0x0, false, 0x5efb391bdd1cda06 );                              
        SDK_FIXED_SIZE( kclock_timer_state_t, 0x518 );                                    
    };                                                                                    
};
#include "magic/kclock_timer_state_t.end.hpp"
SDK_VERIFY( struct nt::kclock_timer_state_t, 0x518 );
