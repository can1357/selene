#pragma once
#include <sdkgen/support_library.hpp>
#include "rm_resource_limit_mask_t.hpp"
#include "rm_resource_limit_flags_t.hpp"

#include "magic/rm_resource_limits_t.start.hpp"
namespace win
{
    // [struct _RM_RESOURCE_LIMITS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rm_resource_limits_t                                                  
    {                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                       
        _m00 union win::rm_resource_limit_mask_t  validity_mask;                   //{ +0x0000    +0x0000    +0x0000    } | .ValidityMask
        _m01 uint64_t                             commit_memory_medium_threshold;  //{ +0x0008    +0x0008    +0x0008    } | .CommitMemoryMediumThreshold
        _m02 uint64_t                             commit_memory_high_threshold;    //{ +0x0010    +0x0010    +0x0010    } | .CommitMemoryHighThreshold
        _m03 uint64_t                             commit_target;                   //{ +0x0018    +0x0018    +0x0018    } | .CommitTarget
        _m04 uint64_t                             commit_memory_cap;               //{ +0x0020    +0x0020    +0x0020    } | .CommitMemoryCap
        _m05 uint64_t                             expected_commit_target;          //{ +0x0028    +0x0028    +0x0028    } | .ExpectedCommitTarget
        _m06 union win::rm_resource_limit_flags_t flags;                           //{ +0x0030    +0x0030    +0x0030    } | .Flags
                                                                                 
        SDK_MAGIC_PROPERTIES( "_RM_RESOURCE_LIMITS.$", 0x38, true, 0x20a83f343e490f91 );                               
        SDK_FIXED_SIZE( rm_resource_limits_t, 0x38 );                               
    };                                                                           
};
#include "magic/rm_resource_limits_t.end.hpp"
SDK_VERIFY( struct win::rm_resource_limits_t, 0x38 );
