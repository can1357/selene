#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lfh_mem_policies_t.start.hpp"
namespace heap
{
    // [struct _HEAP_LFH_MEM_POLICIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfh_mem_policies_t                
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint1_t  disable_affinity;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DisableAffinity
        _m01 uint1_t  slow_subsegment_growth;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .SlowSubsegmentGrowth
        _m02 uint32_t all_policies;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllPolicies
                                             
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_MEM_POLICIES.$", 0x4, true, 0xe5481ce7565c8c31 );                       
        SDK_FIXED_SIZE( lfh_mem_policies_t, 0x4 );                       
    };                                       
};
#include "magic/lfh_mem_policies_t.end.hpp"
SDK_VERIFY( struct heap::lfh_mem_policies_t, 0x4 );
