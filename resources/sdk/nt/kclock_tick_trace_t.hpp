#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kclock_tick_trace_t.start.hpp"
namespace nt
{
    // [struct _KCLOCK_TICK_TRACE]
    // => Windows 11
    //
    struct kclock_tick_trace_t            
    {                                     
        // Windows 11                     
        //                                
        _m00 uint64_t performance_counter;  //{ +0x0000    } | .PerformanceCounter
        _m01 uint64_t pre_interrupt_time;   //{ +0x0008    } | .PreInterruptTime
        _m02 uint64_t post_interrupt_time;  //{ +0x0010    } | .PostInterruptTime
        _m03 uint64_t time_stamp_counter;   //{ +0x0018    } | .TimeStampCounter
        _m04 uint8_t  is_clock_owner;       //{ +0x0020    } | .IsClockOwner
                                          
        SDK_MAGIC_PROPERTIES( "_KCLOCK_TICK_TRACE.$", 0x0, false, 0x8f7f830f00e9e21c );                    
        SDK_FIXED_SIZE( kclock_tick_trace_t, 0x28 );                    
    };                                    
};
#include "magic/kclock_tick_trace_t.end.hpp"
SDK_VERIFY( struct nt::kclock_tick_trace_t, 0x28 );
