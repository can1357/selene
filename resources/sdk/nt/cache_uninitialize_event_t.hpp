#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"

#include "magic/cache_uninitialize_event_t.start.hpp"
namespace nt
{
    struct cache_uninitialize_event_t;

    // [struct _CACHE_UNINITIALIZE_EVENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cache_uninitialize_event_t                     
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                                
        _m00 struct nt::cache_uninitialize_event_t* next;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct nt::kevent_t                    event;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Event
                                                          
        SDK_NONVOL_PROPERTIES( "_CACHE_UNINITIALIZE_EVENT.$", 0x20, true, 0xdae96b0d832c8319 );      
        SDK_FIXED_SIZE( cache_uninitialize_event_t, 0x20 );      
    };                                                    
};
#include "magic/cache_uninitialize_event_t.end.hpp"
SDK_VERIFY( struct nt::cache_uninitialize_event_t, 0x20 );
