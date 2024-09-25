#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/tp_event_timer_cancelled_t.start.hpp"
namespace etw
{
    // [struct _ETW_TP_EVENT_TIMER_CANCELLED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tp_event_timer_cancelled_t                    
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                               
        _m00 struct win::system_trace_header_t header;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             sub_queue;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SubQueue
        _m02 void*                             timer;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Timer
                                                         
        SDK_MAGIC_PROPERTIES( "_ETW_TP_EVENT_TIMER_CANCELLED.$", 0x30, true, 0x3d307aecf2aa8536 );          
        SDK_FIXED_SIZE( tp_event_timer_cancelled_t, 0x30 );          
    };                                                   
};
#include "magic/tp_event_timer_cancelled_t.end.hpp"
SDK_VERIFY( struct etw::tp_event_timer_cancelled_t, 0x30 );
