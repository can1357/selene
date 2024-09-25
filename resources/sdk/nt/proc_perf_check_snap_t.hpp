#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proc_perf_check_snap_t.start.hpp"
namespace nt
{
    // [struct _PROC_PERF_CHECK_SNAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_perf_check_snap_t                                     
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                            
        _m00 uint64_t                time;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Time
        _m01 uint64_t                active;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Active
        _m02 uint64_t                stall;                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Stall
        _m03 uint64_t                frequency_scaled_active;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FrequencyScaledActive
        _m04 uint64_t                performance_scaled_active;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PerformanceScaledActive
        _m05 uint64_t                performance_scaled_kernel_active;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PerformanceScaledKernelActive
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                            
        _m06 uint32_t                responsiveness_events;             //{ +0x0058    +0x0030    +0x0058    } | .ResponsivenessEvents
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                 
        //                                                            
        _m07 uint64_t                cycles_active;                     //{ +0x0030    +0x0030    +0x0030    } | .CyclesActive
        _m08 uint64_t                cycles_affinitized;                //{ +0x0038    +0x0038    +0x0038    } | .CyclesAffinitized
        _m09 sdk::array<uint64_t, 2> tagged_thread_cycles;              //{ +0x0040    +0x0040    +0x0040    } | .TaggedThreadCycles
                                                                      
        SDK_MAGIC_PROPERTIES( "_PROC_PERF_CHECK_SNAP.$", 0x60, true, 0xe14b56e2bdb412eb );                                 
        SDK_DYNAMIC_SIZE( proc_perf_check_snap_t );                                 
    };                                                                
};
#include "magic/proc_perf_check_snap_t.end.hpp"
