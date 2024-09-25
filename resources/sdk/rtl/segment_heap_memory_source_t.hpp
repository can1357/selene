#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segment_heap_memory_source_t.start.hpp"
namespace rtl
{
    // [struct _RTL_SEGMENT_HEAP_MEMORY_SOURCE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct segment_heap_memory_source_t
    {                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t flags;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t memory_type_mask;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MemoryTypeMask
        _m02 uint32_t numa_node;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumaNode
        _m03 void*    partition_handle;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PartitionHandle
                                       
        SDK_NONVOL_PROPERTIES( "_RTL_SEGMENT_HEAP_MEMORY_SOURCE.$", 0x28, true, 0xccd9edbe7b22ebc8 );                 
        SDK_FIXED_SIZE( segment_heap_memory_source_t, 0x28 );                 
    };                                 
};
#include "magic/segment_heap_memory_source_t.end.hpp"
SDK_VERIFY( struct rtl::segment_heap_memory_source_t, 0x28 );
