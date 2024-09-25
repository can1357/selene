#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hp_lfh_perf_flags_t.start.hpp"
namespace rtlp
{
    // [union RTLP_HP_LFH_PERF_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union hp_lfh_perf_flags_t                        
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint1_t  hotspot_detection;               //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .HotspotDetection
        _m01 uint1_t  hotspot_full_commit;             //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .HotspotFullCommit
        _m02 uint1_t  active_subsegment;               //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .ActiveSubsegment
        _m03 uint1_t  smaller_subsegment;              //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .SmallerSubsegment
        _m04 uint1_t  single_affinity_slot;            //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .SingleAffinitySlot
        _m05 uint1_t  apply_lfh_decommit_policy;       //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .ApplyLfhDecommitPolicy
        _m06 uint1_t  enable_garbage_collection;       //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .EnableGarbageCollection
        _m07 uint1_t  large_page_pre_commit;           //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .LargePagePreCommit
        _m08 uint1_t  opportunistic_large_pre_commit;  //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .OpportunisticLargePreCommit
        _m09 uint1_t  lfh_forced_affinity;             //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .LfhForcedAffinity
        _m10 uint1_t  lfh_cacheline_padding;           //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .LfhCachelinePadding
        _m11 uint32_t all_flags;                       //{ +0x0000    +0x0000    +0x0000    } | .AllFlags
                                                     
        SDK_MAGIC_PROPERTIES( "RTLP_HP_LFH_PERF_FLAGS.$", 0x4, true, 0x3ffd3dc4ae6e9988 );                               
        SDK_FIXED_SIZE( hp_lfh_perf_flags_t, 0x4 );                               
    };                                               
};
#include "magic/hp_lfh_perf_flags_t.end.hpp"
SDK_VERIFY( union rtlp::hp_lfh_perf_flags_t, 0x4 );
