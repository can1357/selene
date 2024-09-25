#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_range_t.start.hpp"
namespace heap
{
    // [struct _HEAP_EVENT_RANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_range_t          
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 void*    heap_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeapHandle
        _m01 void*    address;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Address
        _m02 uint64_t size;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Size
                                  
        SDK_MAGIC_PROPERTIES( "_HEAP_EVENT_RANGE.$", 0x18, true, 0x7733a639e9a63dc6 );            
        SDK_FIXED_SIZE( event_range_t, 0x18 );            
    };                            
};
#include "magic/event_range_t.end.hpp"
SDK_VERIFY( struct heap::event_range_t, 0x18 );
