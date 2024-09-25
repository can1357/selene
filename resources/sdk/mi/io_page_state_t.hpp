#pragma once
#include <sdkgen/support_library.hpp>
#include "io_cache_stats_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "../nt/work_queue_item_t.hpp"

#include "magic/io_page_state_t.start.hpp"
namespace mi
{
    // [struct _MI_IO_PAGE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct io_page_state_t                                                           
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                           
        _m00 sdk::array<struct rtl::avl_tree_t, 3> io_pfn_root;                        //{ +0x0008    +0x0008    +0x0000    +0x0008    } | .IoPfnRoot
        _m01 struct mi::io_cache_stats_t           io_cache_stats;                     //{ +0x0038    +0x0038    +0x0098    +0x0038    } | .IoCacheStats
        _m02 struct rtl::avl_tree_t                invariant_io_space;                 //{ +0x0060    +0x0060    +0x0058    +0x0060    } | .InvariantIoSpace
                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                  
        //                                                                           
        _m03 varint_t                              io_pfn_lock;                        //{ +0x0000    +0x0000    +0x0000    } | .IoPfnLock
        _m04 nt::list_entry_t                      unused_cached_maps;                 //{ +0x0020    +0x0020    +0x0020    } | .UnusedCachedMaps
        _m05 uint32_t                              oldest_cache_flush_time_stamp;      //{ +0x0030    +0x0030    +0x0030    } | .OldestCacheFlushTimeStamp
                                                                                     
        // Windows 11                                                                
        //                                                                           
        _m06 sdk::array<uint64_t, 2>               unmapped_node_count;                //{ +0x0010    } | .UnmappedNodeCount
        _m07 volatile uint64_t                     unmapped_huge_io_space_node_count;  //{ +0x0020    } | .UnmappedHugeIoSpaceNodeCount
        _m08 uint64_t                              unmapped_node_count_maximum;        //{ +0x0040    } | .UnmappedNodeCountMaximum
        _m09 sdk::array<uint64_t, 2>               total_node_count;                   //{ +0x0048    } | .TotalNodeCount
        _m10 volatile int32_t                      io_pfn_prune_lock;                  //{ +0x0060    } | .IoPfnPruneLock
        _m11 sdk::array<uint64_t, 2>               resume_page_for_delete_scans;       //{ +0x0068    } | .ResumePageForDeleteScans
        _m12 struct nt::work_queue_item_t          unmapped_node_work_item;            //{ +0x0078    } | .UnmappedNodeWorkItem
                                                                                     
        SDK_MAGIC_PROPERTIES( "_MI_IO_PAGE_STATE.$", 0x68, true, 0x6db875bd05c9de35 );                                  
        SDK_DYNAMIC_SIZE( io_page_state_t );                                         
    };                                                                               
};
#include "magic/io_page_state_t.end.hpp"
