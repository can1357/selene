#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/srwlock_t.hpp"
#include "../rtl/hp_lfh_config_t.hpp"
#include "lfh_subsegment_cache_t.hpp"
#include "lfh_subsegment_stats_t.hpp"
#include "suballocator_callbacks_t.hpp"

#include "magic/lfh_context_t.start.hpp"
namespace heap
{
    struct lfh_bucket_t;

    // [struct _HEAP_LFH_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfh_context_t                                                            
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                          
        _m00 void*                                         backend_ctx;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BackendCtx
        _m01 struct heap::suballocator_callbacks_t         callbacks;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Callbacks
        _m02 const uint8_t*                                affinity_mod_array;        //{ +0x0040    +0x0030    +0x0030    +0x0030    } | .AffinityModArray
        _m03 uint8_t                                       max_affinity;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MaxAffinity
        _m04 sdk::variant<struct rtl::srwlock_t, uint64_t> subsegment_creation_lock;  //{ +0x0030    +0x0048    +0x0048    +0x0048    } | .SubsegmentCreationLock
        _m05 sdk::array<struct heap::lfh_bucket_t*, 129>   buckets;                   //{ +0x00c0    +0x0080    +0x0080    +0x0080    } | .Buckets
                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                          
        _m06 uint8_t                                       lock_type;                 //{ +0x0039    +0x0039    +0x0039    } | .LockType
        _m07 int16_t                                       mem_stats_offset;          //{ +0x003a    +0x003a    +0x003a    } | .MemStatsOffset
        _m08 struct rtl::hp_lfh_config_t                   config;                    //{ +0x003c    +0x003c    +0x003c    } | .Config
        _m09 union heap::lfh_subsegment_stats_t            bucket_stats;              //{ +0x0040    +0x0040    +0x0040    } | .BucketStats
                                                                                    
        // Windows 10 v1607                                                         
        //                                                                          
        _m10 struct heap::lfh_subsegment_cache_t           subsegment_cache;          //{ +0x0050    } | .SubsegmentCache
                                                                                    
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_CONTEXT.$", 0x4c0, true, 0xf2d84e0176e3c6cb );                         
        SDK_DYNAMIC_SIZE( lfh_context_t );                                          
    };                                                                              
};
#include "magic/lfh_context_t.end.hpp"
