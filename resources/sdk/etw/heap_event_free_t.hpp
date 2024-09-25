#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/heap_event_free_t.start.hpp"
namespace etw
{
    // [struct _ETW_HEAP_EVENT_FREE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_event_free_t                               
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                 
        _m00 struct win::system_trace_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             heap_handle;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HeapHandle
        _m02 void*                             address;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Address
        _m03 uint32_t                          source;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Source
                                                           
        SDK_MAGIC_PROPERTIES( "_ETW_HEAP_EVENT_FREE.$", 0x34, true, 0x5f42e52cbd3b1439 );            
        SDK_FIXED_SIZE( heap_event_free_t, 0x34 );            
    };                                                     
};
#include "magic/heap_event_free_t.end.hpp"
SDK_VERIFY( struct etw::heap_event_free_t, 0x34 );
