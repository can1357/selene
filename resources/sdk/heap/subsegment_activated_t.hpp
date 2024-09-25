#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/subsegment_activated_t.start.hpp"
namespace heap
{
    // [struct _HEAP_SUBSEGMENT_ACTIVATED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct subsegment_activated_t                          
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                 
        _m00 struct win::system_trace_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
        _m02 void*                             sub_segment;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SubSegment
                                                           
        SDK_MAGIC_PROPERTIES( "_HEAP_SUBSEGMENT_ACTIVATED.$", 0x30, true, 0x4a879359b9089b9b );            
        SDK_FIXED_SIZE( subsegment_activated_t, 0x30 );            
    };                                                     
};
#include "magic/subsegment_activated_t.end.hpp"
SDK_VERIFY( struct heap::subsegment_activated_t, 0x30 );
