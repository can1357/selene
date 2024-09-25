#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/idle_state_accounting_t.start.hpp"
namespace ppm
{
    // [struct PPM_IDLE_STATE_ACCOUNTING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct idle_state_accounting_t                        
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 uint32_t                idle_transitions;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IdleTransitions
        _m01 uint32_t                failed_transitions;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FailedTransitions
        _m02 uint32_t                invalid_bucket_index;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InvalidBucketIndex
        _m03 uint64_t                total_time;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TotalTime
        _m04 sdk::array<uint32_t, 6> idle_time_buckets;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IdleTimeBuckets
                                                          
        SDK_MAGIC_PROPERTIES( "PPM_IDLE_STATE_ACCOUNTING.$", 0x30, true, 0x94b601666a184b0f );                     
        SDK_FIXED_SIZE( idle_state_accounting_t, 0x30 );                     
    };                                                    
};
#include "magic/idle_state_accounting_t.end.hpp"
SDK_VERIFY( struct ppm::idle_state_accounting_t, 0x30 );
