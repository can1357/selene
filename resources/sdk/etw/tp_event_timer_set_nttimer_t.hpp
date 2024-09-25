#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/tp_event_timer_set_nttimer_t.start.hpp"
namespace etw
{
    // [struct _ETW_TP_EVENT_TIMER_SET_NTTIMER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tp_event_timer_set_nttimer_t                        
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                     
        _m00 struct win::system_trace_header_t header;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 int64_t                           due_time;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DueTime
        _m02 void*                             sub_queue;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SubQueue
        _m03 uint32_t                          tolerable_delay;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TolerableDelay
                                                               
        SDK_MAGIC_PROPERTIES( "_ETW_TP_EVENT_TIMER_SET_NTTIMER.$", 0x34, true, 0xb453f37568eec632 );                
        SDK_FIXED_SIZE( tp_event_timer_set_nttimer_t, 0x34 );                
    };                                                         
};
#include "magic/tp_event_timer_set_nttimer_t.end.hpp"
SDK_VERIFY( struct etw::tp_event_timer_set_nttimer_t, 0x34 );
