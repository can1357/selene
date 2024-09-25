#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/selection_statistics_t.start.hpp"
namespace ppm
{
    struct veto_accounting_t;

    // [struct _PPM_SELECTION_STATISTICS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct selection_statistics_t                                          
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                 
        _m00 uint64_t                       selected_count;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SelectedCount
        _m01 uint64_t                       veto_count;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VetoCount
        _m02 uint64_t                       pre_veto_count;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PreVetoCount
        _m03 uint64_t                       wrong_processor_count;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WrongProcessorCount
        _m04 uint64_t                       latency_count;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LatencyCount
        _m05 uint64_t                       idle_duration_count;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IdleDurationCount
        _m06 uint64_t                       device_dependency_count;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceDependencyCount
        _m07 uint64_t                       processor_dependency_count;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ProcessorDependencyCount
        _m08 uint64_t                       platform_only_count;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .PlatformOnlyCount
        _m09 uint64_t                       interruptible_count;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .InterruptibleCount
        _m10 uint64_t                       legacy_override_count;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .LegacyOverrideCount
        _m11 uint64_t                       cstate_check_count;              //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .CstateCheckCount
        _m12 uint64_t                       no_c_state_count;                //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .NoCStateCount
        _m13 uint64_t                       coordinated_dependency_count;    //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .CoordinatedDependencyCount
        _m14 struct ppm::veto_accounting_t* pre_veto_accounting;             //{ +0x0070    +0x0078    +0x0080    +0x0078    } | .PreVetoAccounting
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                 
        _m15 uint64_t                       not_clock_owner_count;           //{ +0x0070    +0x0070    +0x0070    } | .NotClockOwnerCount
                                                                           
        // Windows 11                                                      
        //                                                                 
        _m16 uint64_t                       dependency_idle_duration_count;  //{ +0x0078    } | .DependencyIdleDurationCount
                                                                           
        SDK_MAGIC_PROPERTIES( "_PPM_SELECTION_STATISTICS.$", 0x80, true, 0x8f717a810cd0a6db );                               
        SDK_DYNAMIC_SIZE( selection_statistics_t );                               
    };                                                                     
};
#include "magic/selection_statistics_t.end.hpp"
