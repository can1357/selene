#pragma once
#include <sdkgen/support_library.hpp>
#include "idle_state_bucket_ex_t.hpp"

#include "magic/idle_state_accounting_ex_t.start.hpp"
namespace ppm
{
    // [struct PPM_IDLE_STATE_ACCOUNTING_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct idle_state_accounting_ex_t                   
    {                                                   
        using idle_time_buckets_t = sdk::array<struct ppm::idle_state_bucket_ex_t, 16>;                      
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                              
        _m00 uint64_t             total_time;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalTime
        _m01 uint32_t             idle_transitions;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IdleTransitions
        _m02 uint32_t             failed_transitions;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .FailedTransitions
        _m03 uint32_t             invalid_bucket_index;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InvalidBucketIndex
        _m04 uint32_t             min_time_us;            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MinTimeUs
        _m05 uint32_t             max_time_us;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxTimeUs
        _m06 uint32_t             cancelled_transitions;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .CancelledTransitions
        _m07 idle_time_buckets_t  idle_time_buckets;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IdleTimeBuckets
                                                        
        SDK_MAGIC_PROPERTIES( "PPM_IDLE_STATE_ACCOUNTING_EX.$", 0x1a0, true, 0x662756f14686768f );                      
        SDK_FIXED_SIZE( idle_state_accounting_ex_t, 0x1a0 );                      
    };                                                  
};
#include "magic/idle_state_accounting_ex_t.end.hpp"
SDK_VERIFY( struct ppm::idle_state_accounting_ex_t, 0x1a0 );
