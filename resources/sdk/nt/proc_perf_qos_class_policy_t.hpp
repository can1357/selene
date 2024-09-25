#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proc_perf_qos_class_policy_t.start.hpp"
namespace nt
{
    // [struct _PROC_PERF_QOS_CLASS_POLICY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_perf_qos_class_policy_t                
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 uint32_t max_policy_percent;                //{ +0x0000    +0x0000    +0x0000    } | .MaxPolicyPercent
        _m01 uint32_t max_equivalent_frequency_percent;  //{ +0x0004    +0x0004    +0x0004    } | .MaxEquivalentFrequencyPercent
        _m02 uint32_t min_policy_percent;                //{ +0x0008    +0x0008    +0x0008    } | .MinPolicyPercent
        _m03 uint32_t autonomous_activity_window;        //{ +0x000c    +0x000c    +0x000c    } | .AutonomousActivityWindow
        _m04 uint32_t energy_perf_preference;            //{ +0x0010    +0x0010    +0x0010    } | .EnergyPerfPreference
        _m05 uint8_t  provide_guidance;                  //{ +0x0014    +0x0014    +0x0014    } | .ProvideGuidance
        _m06 uint8_t  allow_throttling;                  //{ +0x0015    +0x0015    +0x0015    } | .AllowThrottling
        _m07 uint8_t  perf_boost_mode;                   //{ +0x0016    +0x0016    +0x0016    } | .PerfBoostMode
        _m08 uint8_t  latency_hint_perf;                 //{ +0x0017    +0x0017    +0x0017    } | .LatencyHintPerf
        _m09 uint8_t  track_desired_cross_class;         //{ +0x0018    +0x0018    +0x0018    } | .TrackDesiredCrossClass
                                                       
        SDK_MAGIC_PROPERTIES( "_PROC_PERF_QOS_CLASS_POLICY.$", 0x1c, true, 0x6f12bcd6c1b6dd6b );                                 
        SDK_FIXED_SIZE( proc_perf_qos_class_policy_t, 0x1c );                                 
    };                                                 
};
#include "magic/proc_perf_qos_class_policy_t.end.hpp"
SDK_VERIFY( struct nt::proc_perf_qos_class_policy_t, 0x1c );
