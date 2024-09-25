#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/subsegment_init_t.start.hpp"
namespace heap
{
    // [struct _HEAP_SUBSEGMENT_INIT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct subsegment_init_t                                  
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                    
        _m00 struct win::system_trace_header_t header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
        _m02 void*                             sub_segment;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SubSegment
        _m03 uint64_t                          block_size;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BlockSize
        _m04 uint64_t                          block_count;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .BlockCount
        _m05 uint32_t                          affinity_index;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AffinityIndex
                                                              
        SDK_MAGIC_PROPERTIES( "_HEAP_SUBSEGMENT_INIT.$", 0x44, true, 0xaba809933ab52b81 );               
        SDK_FIXED_SIZE( subsegment_init_t, 0x44 );               
    };                                                        
};
#include "magic/subsegment_init_t.end.hpp"
SDK_VERIFY( struct heap::subsegment_init_t, 0x44 );
