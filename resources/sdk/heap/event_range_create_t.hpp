#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_range_create_t.start.hpp"
namespace heap
{
    // [struct _HEAP_EVENT_RANGE_CREATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_range_create_t        
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 void*    heap_handle;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeapHandle
        _m01 uint64_t first_range_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FirstRangeSize
        _m02 uint32_t flags;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                       
        SDK_MAGIC_PROPERTIES( "_HEAP_EVENT_RANGE_CREATE.$", 0x18, true, 0xc6227e41d5ffa16e );                 
        SDK_FIXED_SIZE( event_range_create_t, 0x18 );                 
    };                                 
};
#include "magic/event_range_create_t.end.hpp"
SDK_VERIFY( struct heap::event_range_create_t, 0x18 );
