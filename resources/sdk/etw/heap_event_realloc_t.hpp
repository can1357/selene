#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/heap_event_realloc_t.start.hpp"
namespace etw
{
    // [struct _ETW_HEAP_EVENT_REALLOC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_event_realloc_t                            
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                 
        _m00 struct win::system_trace_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
        _m02 void*                             new_address;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NewAddress
        _m03 void*                             old_address;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OldAddress
        _m04 uint64_t                          new_size;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NewSize
        _m05 uint64_t                          old_size;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .OldSize
        _m06 uint32_t                          source;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Source
                                                           
        SDK_MAGIC_PROPERTIES( "_ETW_HEAP_EVENT_REALLOC.$", 0x4c, true, 0x49472384d9a0d38 );            
        SDK_FIXED_SIZE( heap_event_realloc_t, 0x4c );            
    };                                                     
};
#include "magic/heap_event_realloc_t.end.hpp"
SDK_VERIFY( struct etw::heap_event_realloc_t, 0x4c );
