#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/rb_tree_t.hpp"
#include "../nt/mmpfnlist_t.hpp"
#include "slab_allocator_type_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "node_number_zero_based_t.hpp"
#include "slab_allocator_protection_t.hpp"

#include "magic/slab_allocator_context_t.start.hpp"
namespace mi
{
    struct partition_t;
    struct slab_allocator_entry_t;

    // [struct _MI_SLAB_ALLOCATOR_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct slab_allocator_context_t                                           
    {                                                                         
        union u0_flags_t                                                      
        {                                                                     
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
            //                                                                
            _m05 uint1_t  entry_became_empty;                                   //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .EntryBecameEmpty
            _m06 uint32_t all_flags;                                            //{ +0x0000    +0x0000    +0x0000    } | .AllFlags
                                                                              
            // Windows 11                                                     
            //                                                                
            _m07 uint1_t  demote_in_progress;                                   //{ +0x0000@1  } | .DemoteInProgress
            _m08 uint1_t  zeroed_pages;                                         //{ +0x0000@2  } | .ZeroedPages
                                                                              
            SDK_MAGIC_PROPERTIES( "_MI_SLAB_ALLOCATOR_CONTEXT.Flags.$", 0x4, true, 0x1e7865b6ab98da73 );                                               
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                               
        };                                                                    
                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                    
        _m00 struct rtl::rb_tree_t                allocations_tree;             //{ +0x0000    +0x0000    +0x0000    } | .AllocationsTree
        _m01 volatile int32_t                     lock;                         //{ +0x0010    +0x0010    +0x0010    } | .Lock
        _m02 uint64_t                             free_page_count;              //{ +0x0020    +0x0030    +0x0020    } | .FreePageCount
        _m03 uint64_t                             slab_entry_count;             //{ +0x0028    +0x0048    +0x0028    } | .SlabEntryCount
        _m04 enum mi::slab_allocator_type_t       type;                         //{ +0x0030    +0x0050    +0x0030    } | .Type
        _m09 u0_flags_t                           flags;                        //{ +0x0038    +0x0058    +0x0038    } | .Flags
        _m10 struct nt::mmpfnlist_t               standby_list;                 //{ +0x0040    +0x0070    +0x0040    } | .StandbyList
        _m11 uint64_t                             last_replenish_time;          //{ +0x0068    +0x00c8    +0x0068    } | .LastReplenishTime
        _m12 uint64_t                             last_failure_time;            //{ +0x0070    +0x00d0    +0x0070    } | .LastFailureTime
                                                                              
        // Windows 10 v2004, Windows 10 v20H2                                 
        //                                                                    
        _m13 struct mi::slab_allocator_entry_t*   slab_entry_hint;              //{ +0x0018    +0x0018    } | .SlabEntryHint
        _m14 enum mi::slab_allocator_protection_t protection;                   //{ +0x0034    +0x0034    } | .Protection
                                                                              
        // Windows 11                                                         
        //                                                                    
        _m15 struct mi::partition_t*              partition;                    //{ +0x0018    } | .Partition
        _m16 struct mi::slab_allocator_entry_t*   slab_entry_allocation_hint;   //{ +0x0020    } | .SlabEntryAllocationHint
        _m17 struct mi::slab_allocator_entry_t*   slab_entry_free_hint;         //{ +0x0028    } | .SlabEntryFreeHint
        _m18 uint64_t                             available_pages_goal;         //{ +0x0038    } | .AvailablePagesGoal
        _m19 uint64_t                             charged_page_count;           //{ +0x0040    } | .ChargedPageCount
        _m20 struct mi::node_number_zero_based_t  numa_node_index;              //{ +0x0054    } | .NumaNodeIndex
        _m21 uint32_t                             slab_entries_allocated;       //{ +0x005c    } | .SlabEntriesAllocated
        _m22 uint32_t                             slab_entries_demoted;         //{ +0x0060    } | .SlabEntriesDemoted
        _m23 uint32_t                             slab_entries_failed_fast;     //{ +0x0064    } | .SlabEntriesFailedFast
        _m24 uint32_t                             slab_entries_failed_slow;     //{ +0x0068    } | .SlabEntriesFailedSlow
        _m25 uint32_t                             slab_pages_freed_non_zeroed;  //{ +0x006c    } | .SlabPagesFreedNonZeroed
        _m26 struct nt::work_queue_item_t         replenish_work_item;          //{ +0x00d8    } | .ReplenishWorkItem
        _m27 nt::list_entry_t                     replenish_wait_list;          //{ +0x00f8    } | .ReplenishWaitList
                                                                              
        SDK_MAGIC_PROPERTIES( "_MI_SLAB_ALLOCATOR_CONTEXT.$", 0x78, true, 0x1d51938d28f87cb1 );                            
        SDK_DYNAMIC_SIZE( slab_allocator_context_t );                            
    };                                                                        
};
#include "magic/slab_allocator_context_t.end.hpp"
SDK_VERIFY( union mi::slab_allocator_context_t::u0_flags_t, 0x4 );
