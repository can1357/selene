#pragma once
#include <sdkgen/support_library.hpp>
#include "event_t.hpp"

#include "magic/event_queue_t.start.hpp"
namespace hid
{
    // [struct _EVENT_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_queue_t                                   
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                 
        _m00 sdk::array<union hid::event_t, 16> events;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Events
        _m01 uint8_t                            queue_head;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .QueueHead
        _m02 uint8_t                            queue_tail;  //{ +0x0041    +0x0041    +0x0041    +0x0041    } | .QueueTail
                                                           
        SDK_MAGIC_PROPERTIES( "_EVENT_QUEUE.$", 0x44, true, 0x3897bbd46474bd63 );           
        SDK_FIXED_SIZE( event_queue_t, 0x44 );             
    };                                                     
};
#include "magic/event_queue_t.end.hpp"
SDK_VERIFY( struct hid::event_queue_t, 0x44 );
