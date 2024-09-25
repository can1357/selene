#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/reuse_threshold_activated_t.start.hpp"
namespace heap
{
    // [struct _HEAP_REUSE_THRESHOLD_ACTIVATED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reuse_threshold_activated_t                      
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                  
        _m00 struct win::system_trace_header_t header;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
        _m02 void*                             sub_segment;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SubSegment
        _m03 uint32_t                          bucket_index;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BucketIndex
                                                            
        SDK_MAGIC_PROPERTIES( "_HEAP_REUSE_THRESHOLD_ACTIVATED.$", 0x34, true, 0x296dc24702f04c21 );             
        SDK_FIXED_SIZE( reuse_threshold_activated_t, 0x34 );             
    };                                                      
};
#include "magic/reuse_threshold_activated_t.end.hpp"
SDK_VERIFY( struct heap::reuse_threshold_activated_t, 0x34 );
