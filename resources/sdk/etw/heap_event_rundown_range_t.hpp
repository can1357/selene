#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_event_rundown_range_t.start.hpp"
namespace etw
{
    // [struct _ETW_HEAP_EVENT_RUNDOWN_RANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_event_rundown_range_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 void*    address;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint64_t size;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
                                     
        SDK_MAGIC_PROPERTIES( "_ETW_HEAP_EVENT_RUNDOWN_RANGE.$", 0x10, true, 0x350f577c125ee400 );        
        SDK_FIXED_SIZE( heap_event_rundown_range_t, 0x10 );        
    };                               
};
#include "magic/heap_event_rundown_range_t.end.hpp"
SDK_VERIFY( struct etw::heap_event_rundown_range_t, 0x10 );
