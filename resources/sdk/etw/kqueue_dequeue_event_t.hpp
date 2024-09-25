#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kqueue_dequeue_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_KQUEUE_DEQUEUE_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kqueue_dequeue_event_t             
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                    
        _m00 uint32_t             thread_id;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 uint32_t             entry_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EntryCount
        _m02 sdk::array<void*, 1> entries;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Entries
                                              
        SDK_MAGIC_PROPERTIES( "_ETW_KQUEUE_DEQUEUE_EVENT.$", 0x10, true, 0x558b3ad5b3cd749a );            
        SDK_FIXED_SIZE( kqueue_dequeue_event_t, 0x10 );            
    };                                        
};
#include "magic/kqueue_dequeue_event_t.end.hpp"
SDK_VERIFY( struct etw::kqueue_dequeue_event_t, 0x10 );
