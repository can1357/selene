#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/partition_commit_t.start.hpp"
namespace mi
{
    // [struct _MI_PARTITION_COMMIT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_commit_t                                           
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                              
        _m00 uint64_t                        peak_commitment;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PeakCommitment
        _m01 uint64_t                        total_commit_limit_maximum;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalCommitLimitMaximum
        _m02 sdk::array<volatile int32_t, 2> popups;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Popups
        _m03 uint64_t                        low_commit_threshold;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LowCommitThreshold
        _m04 uint64_t                        high_commit_threshold;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HighCommitThreshold
        _m05 uint64_t                        event_lock;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EventLock
        _m06 uint64_t                        system_commit_reserve;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SystemCommitReserve
        _m07 volatile uint64_t               over_commit;                 //{ +0x0040    +0x0038    +0x0038    +0x0038    } | .OverCommit
                                                                        
        SDK_MAGIC_PROPERTIES( "_MI_PARTITION_COMMIT.$", 0x40, true, 0xb84d7cdd658233a6 );                           
        SDK_DYNAMIC_SIZE( partition_commit_t );                           
    };                                                                  
};
#include "magic/partition_commit_t.end.hpp"
