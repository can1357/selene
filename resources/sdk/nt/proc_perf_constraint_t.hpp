#pragma once
#include <sdkgen/support_library.hpp>
#include "processor_presence_t.hpp"
#include "../perf/control_state_selection_t.hpp"

#include "magic/proc_perf_constraint_t.start.hpp"
namespace nt
{
    struct kprcb_t;
    struct proc_perf_check_context_t;

    // [struct _PROC_PERF_CONSTRAINT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_perf_constraint_t                                                    
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                           
        _m000 uint64_t                               perf_context;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PerfContext
        _m001 uint32_t                               platform_cap;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PlatformCap
        _m002 uint32_t                               thermal_cap;                      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ThermalCap
        _m003 uint32_t                               limit_reasons;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LimitReasons
        _m004 uint64_t                               platform_cap_start_time;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PlatformCapStartTime
        _m005 uint32_t                               proc_cap;                         //{ +0x0010    +0x0030    +0x0030    +0x0030    } | .ProcCap
        _m006 uint32_t                               proc_floor;                       //{ +0x0014    +0x0034    +0x0034    +0x0034    } | .ProcFloor
        _m007 uint32_t                               target_percent;                   //{ +0x0030    +0x0038    +0x0038    +0x0038    } | .TargetPercent
        _m008 uint32_t                               previous_frequency;               //{ +0x003c    +0x006c    +0x006c    +0x006c    } | .PreviousFrequency
        _m009 uint32_t                               previous_percent;                 //{ +0x0040    +0x0070    +0x0070    +0x0070    } | .PreviousPercent
        _m010 uint32_t                               latest_frequency_percent;         //{ +0x0044    +0x0074    +0x0074    +0x0074    } | .LatestFrequencyPercent
        _m011 uint8_t                                force;                            //{ +0x0050    +0x007c    +0x007c    +0x007c    } | .Force
                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                           
        _m012 struct nt::proc_perf_check_context_t*  check_context;                    //{ +0x0000    +0x0000    +0x0000    } | .CheckContext
        _m013 enum nt::processor_presence_t          presence;                         //{ +0x0010    +0x0010    +0x0010    } | .Presence
        _m014 uint32_t                               processor_id;                     //{ +0x0014    +0x0014    +0x0014    } | .ProcessorId
        _m015 uint8_t                                engage_responsiveness_overrides;  //{ +0x003c    +0x003c    +0x003c    } | .EngageResponsivenessOverrides
        _m016 uint8_t                                responsiveness_change_count;      //{ +0x003d    +0x003d    +0x003d    } | .ResponsivenessChangeCount
        _m017 struct perf::control_state_selection_t selection;                        //{ +0x0040    +0x0040    +0x0040    } | .Selection
        _m018 uint32_t                               domain_selection_generation;      //{ +0x0068    +0x0068    +0x0068    } | .DomainSelectionGeneration
        _m019 uint32_t                               latest_performance_percent;       //{ +0x0078    +0x0078    +0x0078    } | .LatestPerformancePercent
        _m020 uint8_t                                use_qos_update_lock;              //{ +0x007d    +0x007d    +0x007d    } | .UseQosUpdateLock
        _m021 uint64_t                               qos_update_lock;                  //{ +0x0080    +0x0080    +0x0080    } | .QosUpdateLock
                                                                                     
        // Windows 10 v1607                                                          
        //                                                                           
        _m022 struct nt::kprcb_t*                    prcb;                             //{ +0x0000    } | .Prcb
        _m023 uint32_t                               selected_percent;                 //{ +0x0034    } | .SelectedPercent
        _m024 uint32_t                               selected_frequency;               //{ +0x0038    } | .SelectedFrequency
        _m025 uint64_t                               selected_state;                   //{ +0x0048    } | .SelectedState
                                                                                     
        // Windows 11                                                                
        //                                                                           
        _m026 uint32_t                               increase_perf_check_count;        //{ +0x0088    } | .IncreasePerfCheckCount
        _m027 uint32_t                               decrease_perf_check_count;        //{ +0x008c    } | .DecreasePerfCheckCount
                                                                                     
        SDK_MAGIC_PROPERTIES( "_PROC_PERF_CONSTRAINT.$", 0x88, true, 0x197e62838d9fb608 );                                
        SDK_DYNAMIC_SIZE( proc_perf_constraint_t );                                  
    };                                                                               
};
#include "magic/proc_perf_constraint_t.end.hpp"
