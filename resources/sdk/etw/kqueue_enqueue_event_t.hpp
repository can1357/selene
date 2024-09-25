#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kqueue_enqueue_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_KQUEUE_ENQUEUE_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kqueue_enqueue_event_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 void*    entry;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m01 uint32_t thread_id;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
                                 
        SDK_MAGIC_PROPERTIES( "_ETW_KQUEUE_ENQUEUE_EVENT.$", 0x10, true, 0x2f82695a317fce1a );          
        SDK_FIXED_SIZE( kqueue_enqueue_event_t, 0x10 );          
    };                           
};
#include "magic/kqueue_enqueue_event_t.end.hpp"
SDK_VERIFY( struct etw::kqueue_enqueue_event_t, 0x10 );
