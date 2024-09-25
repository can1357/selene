#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/event_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_t                     
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                             
        _m00 struct nt::kevent_t event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Event
                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_EVENT.$", 0x18, true, 0x2614ca8b1f83b350 );      
        SDK_FIXED_SIZE( event_t, 0x18 );      
    };                                 
};
#include "magic/event_t.end.hpp"
SDK_VERIFY( struct ndis::event_t, 0x18 );
