#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proc_feedback_t.start.hpp"
namespace nt
{
    struct proc_feedback_counter_t;

    // [struct _PROC_FEEDBACK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_feedback_t                                          
    {                                                               
        using counters_t = sdk::array<struct nt::proc_feedback_counter_t*, 2>;                               
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                          
        _m00 uint64_t                lock;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 uint64_t                cycles_last;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CyclesLast
        _m02 uint64_t                cycles_active;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CyclesActive
        _m03 counters_t              counters;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Counters
        _m04 uint64_t                last_update_time;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LastUpdateTime
        _m05 uint64_t                unscaled_time;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .UnscaledTime
        _m06 volatile int64_t        unaccounted_time;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .UnaccountedTime
        _m07 sdk::array<uint64_t, 2> scaled_time;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ScaledTime
        _m08 uint64_t                unaccounted_kernel_time;         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .UnaccountedKernelTime
        _m09 uint64_t                performance_scaled_kernel_time;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .PerformanceScaledKernelTime
        _m10 uint32_t                user_time_last;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .UserTimeLast
        _m11 uint32_t                kernel_time_last;                //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .KernelTimeLast
        _m12 uint64_t                idle_generation_number_last;     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .IdleGenerationNumberLast
        _m13 uint64_t                hv_active_time_last;             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .HvActiveTimeLast
        _m14 uint64_t                stall_cycles_last;               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .StallCyclesLast
        _m15 uint64_t                stall_time;                      //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .StallTime
        _m16 uint8_t                 kernel_times_index;              //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .KernelTimesIndex
                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                          
        _m17 uint8_t                 counter_discards_idle_time;      //{ +0x0089    +0x0089    +0x0089    } | .CounterDiscardsIdleTime
                                                                    
        // Windows 11                                               
        //                                                          
        _m18 uint8_t                 counter_read_optimize;           //{ +0x008a    } | .CounterReadOptimize
                                                                    
        SDK_MAGIC_PROPERTIES( "_PROC_FEEDBACK.$", 0x90, true, 0xb60c478e7a4495c5 );                               
        SDK_FIXED_SIZE( proc_feedback_t, 0x90 );                               
    };                                                              
};
#include "magic/proc_feedback_t.end.hpp"
SDK_VERIFY( struct nt::proc_feedback_t, 0x90 );
