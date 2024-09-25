#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/heap_event_alloc_t.start.hpp"
namespace etw
{
    // [struct _ETW_HEAP_EVENT_ALLOC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_event_alloc_t                              
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                 
        _m00 struct win::system_trace_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
        _m02 uint64_t                          size;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Size
        _m03 void*                             address;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Address
        _m04 uint32_t                          source;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Source
                                                           
        SDK_MAGIC_PROPERTIES( "_ETW_HEAP_EVENT_ALLOC.$", 0x3c, true, 0xc4f9aba61f4af705 );            
        SDK_FIXED_SIZE( heap_event_alloc_t, 0x3c );            
    };                                                     
};
#include "magic/heap_event_alloc_t.end.hpp"
SDK_VERIFY( struct etw::heap_event_alloc_t, 0x3c );
