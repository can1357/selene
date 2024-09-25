#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_node_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/vamgr_range_t.start.hpp"
namespace heap
{
    // [struct _HEAP_VAMGR_RANGE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vamgr_range_t                                     
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 struct rtl::balanced_node_t    rb_node;           //{ +0x0000    +0x0000    +0x0000    } | .RbNode
        _m01 struct nt::single_list_entry_t next;              //{ +0x0000    +0x0000    +0x0000    } | .Next
        _m02 uint1_t                        allocated;         //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Allocated
        _m03 uint1_t                        internal;          //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .Internal
        _m04 uint1_t                        standalone;        //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .Standalone
        _m05 uint8_t                        allocator_index;   //{ +0x0001    +0x0001    +0x0001    } | .AllocatorIndex
        _m06 sdk::array<uint64_t, 2>        owner_ctx;         //{ +0x0008    +0x0008    +0x0008    } | .OwnerCtx
        _m07 uint64_t                       size_in_chunks;    //{ +0x0018    +0x0018    +0x0018    } | .SizeInChunks
        _m08 uint16_t                       chunk_count;       //{ +0x0018    +0x0018    +0x0018    } | .ChunkCount
        _m09 uint16_t                       prev_chunk_count;  //{ +0x001a    +0x001a    +0x001a    } | .PrevChunkCount
        _m10 uint64_t                       signature;         //{ +0x0018    +0x0018    +0x0018    } | .Signature
                                                             
        SDK_MAGIC_PROPERTIES( "_HEAP_VAMGR_RANGE.$", 0x20, true, 0x8ac9f39297823f9d );                 
        SDK_FIXED_SIZE( vamgr_range_t, 0x20 );                 
    };                                                       
};
#include "magic/vamgr_range_t.end.hpp"
SDK_VERIFY( struct heap::vamgr_range_t, 0x20 );
