#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_uptime_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_UPTIME_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_uptime_information_t    
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint64_t query_interrupt_time;  //{ +0x0000    +0x0000    +0x0000    } | .QueryInterruptTime
        _m01 uint64_t query_unbiased_time;   //{ +0x0008    +0x0008    +0x0008    } | .QueryUnbiasedTime
        _m02 uint64_t end_interrupt_time;    //{ +0x0010    +0x0010    +0x0010    } | .EndInterruptTime
        _m03 uint64_t time_since_creation;   //{ +0x0018    +0x0018    +0x0018    } | .TimeSinceCreation
        _m04 uint64_t uptime;                //{ +0x0020    +0x0020    +0x0020    } | .Uptime
        _m05 uint64_t suspended_time;        //{ +0x0028    +0x0028    +0x0028    } | .SuspendedTime
        _m06 uint4_t  hang_count;            //{ +0x0030@0  +0x0030@0  +0x0030@0  } | .HangCount
        _m07 uint4_t  ghost_count;           //{ +0x0030@4  +0x0030@4  +0x0030@4  } | .GhostCount
        _m08 uint1_t  crashed;               //{ +0x0030@8  +0x0030@8  +0x0030@8  } | .Crashed
        _m09 uint1_t  terminated;            //{ +0x0030@9  +0x0030@9  +0x0030@9  } | .Terminated
                                           
        SDK_MAGIC_PROPERTIES( "_PROCESS_UPTIME_INFORMATION.$", 0x38, true, 0x4aa63475032ff573 );                     
        SDK_FIXED_SIZE( process_uptime_information_t, 0x38 );                     
    };                                     
};
#include "magic/process_uptime_information_t.end.hpp"
SDK_VERIFY( struct win::process_uptime_information_t, 0x38 );
