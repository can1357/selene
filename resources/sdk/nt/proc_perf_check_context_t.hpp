#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proc_perf_check_context_t.start.hpp"
namespace nt
{
    struct proc_perf_load_t;
    struct proc_perf_check_t;
    struct proc_perf_domain_t;
    struct proc_perf_history_t;
    struct proc_perf_constraint_t;

    // [struct _PROC_PERF_CHECK_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_perf_check_context_t                                        
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                  
        _m00 struct nt::proc_perf_domain_t*     domain;                       //{ +0x0000    +0x0000    +0x0000    } | .Domain
        _m01 struct nt::proc_perf_constraint_t* constraint;                   //{ +0x0008    +0x0008    +0x0008    } | .Constraint
        _m02 struct nt::proc_perf_check_t*      perf_check;                   //{ +0x0010    +0x0010    +0x0010    } | .PerfCheck
        _m03 struct nt::proc_perf_load_t*       load;                         //{ +0x0018    +0x0018    +0x0018    } | .Load
        _m04 struct nt::proc_perf_history_t*    perf_history;                 //{ +0x0020    +0x0020    +0x0020    } | .PerfHistory
        _m05 uint32_t                           utility;                      //{ +0x0028    +0x0028    +0x0028    } | .Utility
        _m06 uint32_t                           affinitized_utility;          //{ +0x002c    +0x002c    +0x002c    } | .AffinitizedUtility
        _m07 uint32_t                           media_utility;                //{ +0x0030    +0x0030    +0x0030    } | .MediaUtility
        _m08 uint16_t                           latest_affinitized_percent;   //{ +0x0034    +0x003c    +0x0034    } | .LatestAffinitizedPercent
        _m09 uint16_t                           average_performance_percent;  //{ +0x0036    +0x003e    +0x0036    } | .AveragePerformancePercent
        _m10 uint32_t                           relative_performance;         //{ +0x0038    +0x0040    +0x0038    } | .RelativePerformance
        _m11 uint8_t                            nt_processor;                 //{ +0x003c    +0x0044    +0x003c    } | .NtProcessor
                                                                            
        // Windows 11                                                       
        //                                                                  
        _m12 uint32_t                           important_utility;            //{ +0x0034    } | .ImportantUtility
        _m13 uint32_t                           ideal_utility;                //{ +0x0038    } | .IdealUtility
                                                                            
        SDK_MAGIC_PROPERTIES( "_PROC_PERF_CHECK_CONTEXT.$", 0x40, true, 0x470678fdcd685f38 );                            
        SDK_DYNAMIC_SIZE( proc_perf_check_context_t );                            
    };                                                                      
};
#include "magic/proc_perf_check_context_t.end.hpp"
