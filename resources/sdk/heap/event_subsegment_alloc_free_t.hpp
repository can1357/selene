#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_subsegment_alloc_free_t.start.hpp"
namespace heap
{
    // [struct _HEAP_EVENT_SUBSEGMENT_ALLOC_FREE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_subsegment_alloc_free_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 void*    heap_handle;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeapHandle
        _m01 void*    sub_segment;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SubSegment
        _m02 uint64_t sub_segment_size;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SubSegmentSize
        _m03 uint64_t block_size;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BlockSize
                                        
        SDK_MAGIC_PROPERTIES( "_HEAP_EVENT_SUBSEGMENT_ALLOC_FREE.$", 0x20, true, 0x476428db5d1aa1dc );                 
        SDK_FIXED_SIZE( event_subsegment_alloc_free_t, 0x20 );                 
    };                                  
};
#include "magic/event_subsegment_alloc_free_t.end.hpp"
SDK_VERIFY( struct heap::event_subsegment_alloc_free_t, 0x20 );
