#pragma once
#include <sdkgen/support_library.hpp>
#include "cached_event_t.hpp"

#include "magic/thread_call_object_cache_t.start.hpp"
namespace win
{
    // [struct ThreadCallObjectCache]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_call_object_cache_t                             
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                        
        _m00 sdk::array<class win::cached_event_t, 3> free_events;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .freeEvents
                                                                  
        SDK_MAGIC_PROPERTIES( "ThreadCallObjectCache.$", 0x50, true, 0x193a0cb241855ad0 );            
        SDK_FIXED_SIZE( thread_call_object_cache_t, 0x50 );            
    };                                                            
};
#include "magic/thread_call_object_cache_t.end.hpp"
SDK_VERIFY( struct win::thread_call_object_cache_t, 0x50 );
