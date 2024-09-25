#pragma once
#include <sdkgen/support_library.hpp>
#include "proc_idle_state_accounting_t.hpp"
#include "../ppm/idle_bucket_time_type_t.hpp"

#include "magic/proc_idle_accounting_t.start.hpp"
namespace nt
{
    // [struct _PROC_IDLE_ACCOUNTING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_idle_accounting_t                                
    {                                                            
        using state_t = sdk::array<struct nt::proc_idle_state_accounting_t, 1>;                  
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                       
        _m00 uint32_t                          state_count;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateCount
        _m01 uint32_t                          total_transitions;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalTransitions
        _m02 uint32_t                          reset_count;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResetCount
        _m03 uint32_t                          abort_count;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AbortCount
        _m04 uint64_t                          start_time;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StartTime
        _m05 uint64_t                          prior_idle_time;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PriorIdleTime
        _m06 enum ppm::idle_bucket_time_type_t time_unit;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TimeUnit
        _m07 state_t                           state;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .State
                                                                 
        SDK_MAGIC_PROPERTIES( "_PROC_IDLE_ACCOUNTING.$", 0x410, true, 0xdc645713d3bf21bf );                  
        SDK_DYNAMIC_SIZE( proc_idle_accounting_t );                  
    };                                                           
};
#include "magic/proc_idle_accounting_t.end.hpp"
