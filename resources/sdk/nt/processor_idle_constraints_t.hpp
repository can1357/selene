#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_idle_constraints_t.start.hpp"
namespace nt
{
    // [struct _PROCESSOR_IDLE_CONSTRAINTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_idle_constraints_t      
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint64_t total_time;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalTime
        _m01 uint64_t idle_time;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IdleTime
        _m02 uint64_t expected_idle_duration;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ExpectedIdleDuration
        _m03 uint64_t max_idle_duration;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxIdleDuration
        _m04 uint32_t override_state;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OverrideState
        _m05 uint32_t time_check;              //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .TimeCheck
        _m06 uint8_t  promote_percent;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PromotePercent
        _m07 uint8_t  demote_percent;          //{ +0x0029    +0x0029    +0x0029    +0x0029    } | .DemotePercent
        _m08 uint8_t  parked;                  //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .Parked
        _m09 uint8_t  interruptible;           //{ +0x002b    +0x002b    +0x002b    +0x002b    } | .Interruptible
        _m10 uint8_t  platform_idle;           //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .PlatformIdle
        _m11 uint8_t  expected_wake_reason;    //{ +0x002d    +0x002d    +0x002d    +0x002d    } | .ExpectedWakeReason
                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m12 uint8_t  idle_state_max;          //{ +0x002e    +0x002e    +0x002e    } | .IdleStateMax
                                             
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_IDLE_CONSTRAINTS.$", 0x30, true, 0xaa3ed39efc5f0f40 );                       
        SDK_FIXED_SIZE( processor_idle_constraints_t, 0x30 );                       
    };                                       
};
#include "magic/processor_idle_constraints_t.end.hpp"
SDK_VERIFY( struct nt::processor_idle_constraints_t, 0x30 );
