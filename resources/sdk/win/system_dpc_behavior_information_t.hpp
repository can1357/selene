#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_dpc_behavior_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_DPC_BEHAVIOR_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_dpc_behavior_information_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t dpc_queue_depth;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DpcQueueDepth
        _m01 uint32_t minimum_dpc_rate;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinimumDpcRate
        _m02 uint32_t adjust_dpc_threshold;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AdjustDpcThreshold
        _m03 uint32_t ideal_dpc_rate;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IdealDpcRate
                                            
        SDK_MAGIC_PROPERTIES( "_SYSTEM_DPC_BEHAVIOR_INFORMATION.$", 0x14, true, 0xa559a0a7875a6b12 );                     
        SDK_FIXED_SIZE( system_dpc_behavior_information_t, 0x14 );                     
    };                                      
};
#include "magic/system_dpc_behavior_information_t.end.hpp"
SDK_VERIFY( struct win::system_dpc_behavior_information_t, 0x14 );
