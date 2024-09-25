#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proc_feedback_counter_t.start.hpp"
namespace nt
{
    // [struct _PROC_FEEDBACK_COUNTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_feedback_counter_t                                          
    {                                                                       
        using differential_read_t = sdk::function<void(uint64_t, uint8_t, uint64_t*, uint64_t*)>*;                     
                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                  
        _m00 sdk::function<void(uint64_t, uint32_t*)>* instantaneous_read;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InstantaneousRead
        _m01 differential_read_t                       differential_read;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DifferentialRead
        _m02 uint64_t                                  last_actual_count;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LastActualCount
        _m03 uint64_t                                  last_reference_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LastReferenceCount
        _m04 uint32_t                                  cached_value;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CachedValue
        _m05 uint8_t                                   affinitized;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Affinitized
        _m06 uint8_t                                   differential;          //{ +0x0021    +0x0021    +0x0021    +0x0021    } | .Differential
        _m07 uint8_t                                   scaling;               //{ +0x0022    +0x0023    +0x0023    +0x0023    } | .Scaling
        _m08 uint64_t                                  context;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Context
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                  
        _m09 uint8_t                                   discard_idle_time;     //{ +0x0022    +0x0022    +0x0022    } | .DiscardIdleTime
                                                                            
        SDK_MAGIC_PROPERTIES( "_PROC_FEEDBACK_COUNTER.$", 0x30, true, 0x6aa803bb16719cfa );                     
        SDK_FIXED_SIZE( proc_feedback_counter_t, 0x30 );                     
    };                                                                      
};
#include "magic/proc_feedback_counter_t.end.hpp"
SDK_VERIFY( struct nt::proc_feedback_counter_t, 0x30 );
