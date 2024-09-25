#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thread_affinity_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_THREAD_AFFINITY_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_affinity_event_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t mask;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Mask
        _m01 uint32_t thread_id;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
        _m02 uint16_t group;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Group
                                  
        SDK_MAGIC_PROPERTIES( "_ETW_THREAD_AFFINITY_EVENT.$", 0x10, true, 0x5c0b4e60c947f75f );          
        SDK_FIXED_SIZE( thread_affinity_event_t, 0x10 );          
    };                            
};
#include "magic/thread_affinity_event_t.end.hpp"
SDK_VERIFY( struct etw::thread_affinity_event_t, 0x10 );
