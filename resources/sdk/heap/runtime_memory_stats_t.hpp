#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/hp_seg_alloc_policy_t.hpp"
#include "opportunistic_large_page_stats_t.hpp"

#include "magic/runtime_memory_stats_t.start.hpp"
namespace heap
{
    // [struct _HEAP_RUNTIME_MEMORY_STATS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct runtime_memory_stats_t                                            
    {                                                                        
        using large_page_stats_t = sdk::array<struct heap::opportunistic_large_page_stats_t, 2>;                              
                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                   
        _m00 volatile uint64_t                 total_reserved_pages;           //{ +0x0000    +0x0000    +0x0000    } | .TotalReservedPages
        _m01 volatile uint64_t                 total_committed_pages;          //{ +0x0008    +0x0008    +0x0008    } | .TotalCommittedPages
        _m02 uint64_t                          free_committed_pages;           //{ +0x0010    +0x0010    +0x0010    } | .FreeCommittedPages
        _m03 uint64_t                          lfh_free_committed_pages;       //{ +0x0018    +0x0018    +0x0018    } | .LfhFreeCommittedPages
        _m04 large_page_stats_t                large_page_stats;               //{ +0x0020    +0x0020    +0x0020    } | .LargePageStats
        _m05 struct rtl::hp_seg_alloc_policy_t large_page_utilization_policy;  //{ +0x0040    +0x0040    +0x0040    } | .LargePageUtilizationPolicy
                                                                             
        SDK_MAGIC_PROPERTIES( "_HEAP_RUNTIME_MEMORY_STATS.$", 0x58, true, 0x57001d40295a6aaa );                              
        SDK_FIXED_SIZE( runtime_memory_stats_t, 0x58 );                              
    };                                                                       
};
#include "magic/runtime_memory_stats_t.end.hpp"
SDK_VERIFY( struct heap::runtime_memory_stats_t, 0x58 );
