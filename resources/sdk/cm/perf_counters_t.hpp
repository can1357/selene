#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perf_counters_t.start.hpp"
namespace cm
{
    // [struct _CM_PERF_COUNTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perf_counters_t                        
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint64_t opened_keys;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OpenedKeys
        _m01 uint64_t delay_close_kc_bs;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DelayCloseKCBs
        _m02 uint64_t private_alloc_pages;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PrivateAllocPages
        _m03 uint64_t private_alloc_free;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PrivateAllocFree
        _m04 uint64_t private_alloc_used;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PrivateAllocUsed
        _m05 uint64_t lookup_cache_hit;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LookupCacheHit
        _m06 uint64_t lookup_cache_miss_found;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .LookupCacheMissFound
        _m07 uint64_t lookup_cache_miss_not_found;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .LookupCacheMissNotFound
        _m08 uint64_t view_map;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ViewMap
        _m09 uint64_t view_un_map;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ViewUnMap
        _m10 uint64_t hive_shrink;                  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .HiveShrink
                                                  
        SDK_MAGIC_PROPERTIES( "_CM_PERF_COUNTERS.$", 0x58, true, 0xc513d26679f1118b );                            
        SDK_FIXED_SIZE( perf_counters_t, 0x58 );                            
    };                                            
};
#include "magic/perf_counters_t.end.hpp"
SDK_VERIFY( struct cm::perf_counters_t, 0x58 );
