#pragma once
#include <sdkgen/support_library.hpp>
#include "ham_pend_durations_t.hpp"

#include "magic/ham_activity_started_payload_t.start.hpp"
namespace win
{
    // [struct _HAM_ACTIVITY_STARTED_PAYLOAD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ham_activity_started_payload_t                  
    {                                                      
        using pend_durations_t = sdk::variant<sdk::array<uint32_t, 5>, union win::ham_pend_durations_t>;                            
                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                 
        _m00 uint64_t          generation;                   //{ +0x0000    +0x0000    +0x0000    } | .Generation
        _m01 uint64_t          pend_start_perf_counter;      //{ +0x0008    +0x0008    +0x0008    } | .PendStartPerfCounter
        _m02 pend_durations_t  pend_durations;               //{ +0x0010    +0x0014    +0x0010    } | .PendDurations
        _m03 uint16_t          previous_terminate_reason;    //{ +0x0024@0  +0x0010@0  +0x0024@0  } | .PreviousTerminateReason
        _m04 uint3_t           current_state;                //{ +0x0024@16 +0x0010@16 +0x0024@16 } | .CurrentState
        _m05 uint32_t          all_flags;                    //{ +0x0024    +0x0010    +0x0024    } | .AllFlags
                                                           
        // Windows 10 v2004, Windows 10 v20H2                            
        //                                                 
        _m06 uint32_t          resource_pend_perf_duration;  //{ +0x0010    +0x0010    } | .ResourcePendPerfDuration
        _m07 uint32_t          host_optimization_duration;   //{ +0x0014    +0x0014    } | .HostOptimizationDuration
        _m08 uint32_t          licensing_duration;           //{ +0x0018    +0x0018    } | .LicensingDuration
        _m09 uint32_t          host_state_duration;          //{ +0x001c    +0x001c    } | .HostStateDuration
        _m10 uint32_t          host_terminate_duration;      //{ +0x0020    +0x0020    } | .HostTerminateDuration
                                                           
        SDK_MAGIC_PROPERTIES( "_HAM_ACTIVITY_STARTED_PAYLOAD.$", 0x28, true, 0x2d6cfb67418d4870 );                            
        SDK_FIXED_SIZE( ham_activity_started_payload_t, 0x28 );                            
    };                                                     
};
#include "magic/ham_activity_started_payload_t.end.hpp"
SDK_VERIFY( struct win::ham_activity_started_payload_t, 0x28 );
