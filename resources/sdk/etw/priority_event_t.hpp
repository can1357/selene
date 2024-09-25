#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/priority_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_PRIORITY_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct priority_event_t            
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t thread_id;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 int8_t   old_priority;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OldPriority
        _m02 int8_t   new_priority;      //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .NewPriority
        _m03 int8_t   dynamic_priority;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .DynamicPriority
                                       
        SDK_MAGIC_PROPERTIES( "_ETW_PRIORITY_EVENT.$", 0x8, true, 0x3cf9cd4dcb4f1009 );                 
        SDK_FIXED_SIZE( priority_event_t, 0x8 );                 
    };                                 
};
#include "magic/priority_event_t.end.hpp"
SDK_VERIFY( struct etw::priority_event_t, 0x8 );
