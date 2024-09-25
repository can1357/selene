#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/agg_internal_stats_t.start.hpp"
namespace tlg
{
    // [struct TLG_AGG_INTERNAL_STATS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct agg_internal_stats_t                
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint64_t total_entries_flushed;     //{ +0x0000    +0x0000    +0x0000    } | .TotalEntriesFlushed
        _m01 uint64_t num_flushes;               //{ +0x0008    +0x0008    +0x0008    } | .NumFlushes
        _m02 uint32_t max_entries_stored;        //{ +0x0010    +0x0010    +0x0010    } | .MaxEntriesStored
        _m03 uint32_t max_entries_flushed;       //{ +0x0014    +0x0014    +0x0014    } | .MaxEntriesFlushed
        _m04 uint32_t min_entries_flushed;       //{ +0x0018    +0x0018    +0x0018    } | .MinEntriesFlushed
        _m05 uint32_t num_bucket_limit_reached;  //{ +0x001c    +0x001c    +0x001c    } | .NumBucketLimitReached
        _m06 uint32_t num_allocation_failures;   //{ +0x0020    +0x0020    +0x0020    } | .NumAllocationFailures
        _m07 uint32_t num_large_event_failures;  //{ +0x0024    +0x0024    +0x0024    } | .NumLargeEventFailures
                                               
        SDK_MAGIC_PROPERTIES( "TLG_AGG_INTERNAL_STATS.$", 0x28, true, 0xe2f9b0a7c6ad07cd );                         
        SDK_FIXED_SIZE( agg_internal_stats_t, 0x28 );                         
    };                                         
};
#include "magic/agg_internal_stats_t.end.hpp"
SDK_VERIFY( struct tlg::agg_internal_stats_t, 0x28 );
