#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rm_resource_limit_mask_t.start.hpp"
namespace win
{
    // [union _RM_RESOURCE_LIMIT_MASK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union rm_resource_limit_mask_t             
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint1_t  commit_medium_threshold;   //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .CommitMediumThreshold
        _m01 uint1_t  commit_high_threshold;     //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .CommitHighThreshold
        _m02 uint1_t  commit_target;             //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .CommitTarget
        _m03 uint1_t  commit_cap;                //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .CommitCap
        _m04 uint1_t  expected_commit_target;    //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .ExpectedCommitTarget
        _m05 uint1_t  execution_speed;           //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .ExecutionSpeed
        _m06 uint1_t  monitor_gpu_interference;  //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .MonitorGpuInterference
        _m07 uint1_t  take_maximum;              //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .TakeMaximum
        _m08 uint64_t all;                       //{ +0x0000    +0x0000    +0x0000    } | .All
                                               
        SDK_MAGIC_PROPERTIES( "_RM_RESOURCE_LIMIT_MASK.$", 0x8, true, 0xa976dd359a33f170 );                         
        SDK_FIXED_SIZE( rm_resource_limit_mask_t, 0x8 );                         
    };                                         
};
#include "magic/rm_resource_limit_mask_t.end.hpp"
SDK_VERIFY( union win::rm_resource_limit_mask_t, 0x8 );
