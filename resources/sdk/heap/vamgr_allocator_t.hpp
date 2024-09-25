#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/rb_tree_t.hpp"

#include "magic/vamgr_allocator_t.start.hpp"
namespace heap
{
    struct vamgr_vaspace_t;

    // [struct _HEAP_VAMGR_ALLOCATOR]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vamgr_allocator_t                                 
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                   
        _m00 uint64_t                      tree_lock;          //{ +0x0000    +0x0000    +0x0000    } | .TreeLock
        _m01 struct rtl::rb_tree_t         free_ranges;        //{ +0x0008    +0x0008    +0x0008    } | .FreeRanges
        _m02 struct heap::vamgr_vaspace_t* va_space;           //{ +0x0018    +0x0018    +0x0018    } | .VaSpace
        _m03 uint16_t                      chunks_per_region;  //{ +0x0028    +0x0028    +0x0028    } | .ChunksPerRegion
        _m04 uint16_t                      ref_count;          //{ +0x002a    +0x002a    +0x002a    } | .RefCount
        _m05 uint8_t                       allocator_index;    //{ +0x002c    +0x002c    +0x002c    } | .AllocatorIndex
        _m06 uint8_t                       numa_node;          //{ +0x002d    +0x002d    +0x002d    } | .NumaNode
        _m07 uint1_t                       lock_type;          //{ +0x002e@0  +0x002e@0  +0x002e@0  } | .LockType
        _m08 varuint_t                     memory_type;        //{ +0x002e@1  +0x002e@1  +0x002e@1  } | .MemoryType
        _m09 uint1_t                       constrained_va;     //{ +0x002e@3  +0x002e@4  +0x002e@3  } | .ConstrainedVA
        _m10 uint1_t                       allow_free_head;    //{ +0x002e@4  +0x002e@5  +0x002e@4  } | .AllowFreeHead
                                                             
        // Windows 10 v2004, Windows 10 v20H2                  
        //                                                   
        _m11 void*                         partition_handle;   //{ +0x0020    +0x0020    } | .PartitionHandle
                                                             
        // Windows 11                                        
        //                                                   
        _m12 void*                         context_handle;     //{ +0x0020    } | .ContextHandle
                                                             
        SDK_MAGIC_PROPERTIES( "_HEAP_VAMGR_ALLOCATOR.$", 0x30, true, 0x699ceeba925d8671 );                  
        SDK_FIXED_SIZE( vamgr_allocator_t, 0x30 );                  
    };                                                       
};
#include "magic/vamgr_allocator_t.end.hpp"
SDK_VERIFY( struct heap::vamgr_allocator_t, 0x30 );
