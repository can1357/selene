#pragma once
#include <sdkgen/support_library.hpp>
#include "proc_idle_state_bucket_t.hpp"
#include "../ppm/selection_statistics_t.hpp"

#include "magic/platform_idle_state_accounting_t.start.hpp"
namespace nt
{
    // [struct _PLATFORM_IDLE_STATE_ACCOUNTING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct platform_idle_state_accounting_t                          
    {                                                                
        using idle_time_buckets_t = sdk::array<struct nt::proc_idle_state_bucket_t, 26>;                     
                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                           
        _m00 uint32_t                           cancel_count;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CancelCount
        _m01 uint32_t                           failure_count;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FailureCount
        _m02 uint32_t                           success_count;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SuccessCount
        _m03 uint64_t                           max_time;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxTime
        _m04 uint64_t                           min_time;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MinTime
        _m05 uint64_t                           total_time;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TotalTime
        _m06 uint32_t                           invalid_bucket_index;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InvalidBucketIndex
        _m07 struct ppm::selection_statistics_t selection_statistics;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SelectionStatistics
        _m08 idle_time_buckets_t                idle_time_buckets;     //{ +0x00a8    +0x00b0    +0x00b8    +0x00b0    } | .IdleTimeBuckets
                                                                     
        SDK_MAGIC_PROPERTIES( "_PLATFORM_IDLE_STATE_ACCOUNTING.$", 0x3f0, true, 0x320b3321b83b36fc );                     
        SDK_DYNAMIC_SIZE( platform_idle_state_accounting_t );                     
    };                                                               
};
#include "magic/platform_idle_state_accounting_t.end.hpp"
