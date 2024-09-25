#pragma once
#include <sdkgen/support_library.hpp>
#include "combine_workitem_t.hpp"
#include "combine_page_listhead_t.hpp"
#include "page_combine_statistics_t.hpp"

#include "magic/page_combining_support_t.start.hpp"
namespace mi
{
    struct partition_t;

    // [struct _MI_PAGE_COMBINING_SUPPORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct page_combining_support_t                                          
    {                                                                        
        using combine_page_list_heads_t = sdk::array<struct mi::combine_page_listhead_t, 16>;                           
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                   
        _m00 struct mi::partition_t*              partition;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Partition
        _m01 nt::list_entry_t                     arbitrary_pfn_map_list;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ArbitraryPfnMapList
        _m02 struct mi::combine_workitem_t        free_combine_pool_item;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FreeCombinePoolItem
        _m03 uint32_t                             combining_thread_count;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CombiningThreadCount
        _m04 nt::list_entry_t                     combine_page_free_list;      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CombinePageFreeList
        _m05 uint64_t                             combine_free_list_lock;      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .CombineFreeListLock
        _m06 combine_page_list_heads_t            combine_page_list_heads;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .CombinePageListHeads
        _m07 struct mi::page_combine_statistics_t page_combine_stats;          //{ +0x0160    +0x0168    +0x0168    +0x0168    } | .PageCombineStats
                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                   
        _m08 uint64_t                             common_page_combine_domain;  //{ +0x0160    +0x0160    +0x0160    } | .CommonPageCombineDomain
                                                                             
        SDK_MAGIC_PROPERTIES( "_MI_PAGE_COMBINING_SUPPORT.$", 0x190, true, 0x6df47629dea8b308 );                           
        SDK_DYNAMIC_SIZE( page_combining_support_t );                           
    };                                                                       
};
#include "magic/page_combining_support_t.end.hpp"
