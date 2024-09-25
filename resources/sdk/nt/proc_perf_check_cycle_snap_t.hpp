#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proc_perf_check_cycle_snap_t.start.hpp"
namespace nt
{
    // [struct _PROC_PERF_CHECK_CYCLE_SNAP]
    // => Windows 11
    //
    struct proc_perf_check_cycle_snap_t                   
    {                                                     
        // Windows 11                                     
        //                                                
        _m00 uint64_t                cycles_active;         //{ +0x0000    } | .CyclesActive
        _m01 uint64_t                cycles_affinitized;    //{ +0x0008    } | .CyclesAffinitized
        _m02 sdk::array<uint64_t, 4> tagged_thread_cycles;  //{ +0x0010    } | .TaggedThreadCycles
        _m03 uint32_t                workload_classes;      //{ +0x0030    } | .WorkloadClasses
        _m04 sdk::array<uint64_t, 1> thread_type_cycles;    //{ +0x0038    } | .ThreadTypeCycles
                                                          
        SDK_MAGIC_PROPERTIES( "_PROC_PERF_CHECK_CYCLE_SNAP.$", 0x0, false, 0x2c38aed4f9173025 );                     
        SDK_FIXED_SIZE( proc_perf_check_cycle_snap_t, 0x40 );                     
    };                                                    
};
#include "magic/proc_perf_check_cycle_snap_t.end.hpp"
SDK_VERIFY( struct nt::proc_perf_check_cycle_snap_t, 0x40 );
