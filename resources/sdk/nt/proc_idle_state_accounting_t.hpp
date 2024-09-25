#pragma once
#include <sdkgen/support_library.hpp>
#include "proc_idle_state_bucket_t.hpp"
#include "../ppm/selection_statistics_t.hpp"

#include "magic/proc_idle_state_accounting_t.start.hpp"
namespace nt
{
    // [struct _PROC_IDLE_STATE_ACCOUNTING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_idle_state_accounting_t                              
    {                                                                
        using idle_time_buckets_t = sdk::array<struct nt::proc_idle_state_bucket_t, 26>;                     
                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                           
        _m00 uint64_t                           total_time;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalTime
        _m01 uint32_t                           cancel_count;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CancelCount
        _m02 uint32_t                           failure_count;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .FailureCount
        _m03 uint32_t                           success_count;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SuccessCount
        _m04 uint32_t                           invalid_bucket_index;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .InvalidBucketIndex
        _m05 uint64_t                           min_time;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MinTime
        _m06 uint64_t                           max_time;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MaxTime
        _m07 struct ppm::selection_statistics_t selection_statistics;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SelectionStatistics
        _m08 idle_time_buckets_t                idle_time_buckets;     //{ +0x00a0    +0x00a8    +0x00b0    +0x00a8    } | .IdleTimeBuckets
                                                                     
        SDK_MAGIC_PROPERTIES( "_PROC_IDLE_STATE_ACCOUNTING.$", 0x3e8, true, 0xee276858ae9a661f );                     
        SDK_DYNAMIC_SIZE( proc_idle_state_accounting_t );                     
    };                                                               
};
#include "magic/proc_idle_state_accounting_t.end.hpp"
