#pragma once
#include <sdkgen/support_library.hpp>
#include "pool_type_t.hpp"
#include "fast_mutex_t.hpp"
#include "single_list_entry_t.hpp"

#include "magic/pool_descriptor_t.start.hpp"
namespace nt
{
    // [struct _POOL_DESCRIPTOR]
    // => Windows 10 v1607
    //
    struct pool_descriptor_t                                                
    {                                                                       
        // Windows 10 v1607                                                 
        //                                                                  
        _m00 enum nt::pool_type_t              pool_type;                     //{ +0x0000    } | .PoolType
        _m01 struct nt::fast_mutex_t           paged_lock;                    //{ +0x0008    } | .PagedLock
        _m02 uint64_t                          non_paged_lock;                //{ +0x0008    } | .NonPagedLock
        _m03 volatile int32_t                  running_allocs;                //{ +0x0040    } | .RunningAllocs
        _m04 volatile uint64_t                 pages_allocated;               //{ +0x0048    } | .PagesAllocated
        _m05 volatile uint64_t                 big_pages_allocated;           //{ +0x0050    } | .BigPagesAllocated
        _m06 volatile uint64_t                 bytes_allocated;               //{ +0x0058    } | .BytesAllocated
        _m07 volatile int32_t                  running_deallocs;              //{ +0x0080    } | .RunningDeallocs
        _m08 volatile uint64_t                 pages_deallocated;             //{ +0x0088    } | .PagesDeallocated
        _m09 volatile uint64_t                 big_pages_deallocated;         //{ +0x0090    } | .BigPagesDeallocated
        _m10 volatile uint64_t                 bytes_deallocated;             //{ +0x0098    } | .BytesDeallocated
        _m11 uint32_t                          pool_index;                    //{ +0x00c0    } | .PoolIndex
        _m12 enum nt::pool_type_t              pool_type_copy;                //{ +0x00c4    } | .PoolTypeCopy
        _m13 struct nt::single_list_entry_t    pending_frees;                 //{ +0x0100    } | .PendingFrees
        _m14 volatile int32_t                  threads_processing_deferrals;  //{ +0x0108    } | .ThreadsProcessingDeferrals
        _m15 volatile int32_t                  pending_free_depth;            //{ +0x010c    } | .PendingFreeDepth
        _m16 sdk::array<nt::list_entry_t, 256> list_heads;                    //{ +0x0140    } | .ListHeads
                                                                            
        SDK_MAGIC_PROPERTIES( "_POOL_DESCRIPTOR.$", 0x0, false, 0xc0825586692e31d4 );                             
        SDK_FIXED_SIZE( pool_descriptor_t, 0x1140 );                             
    };                                                                      
};
#include "magic/pool_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::pool_descriptor_t, 0x1140 );
