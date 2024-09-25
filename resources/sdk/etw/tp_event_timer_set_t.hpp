#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/tp_event_timer_set_t.start.hpp"
namespace etw
{
    // [struct _ETW_TP_EVENT_TIMER_SET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tp_event_timer_set_t                              
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                   
        _m00 struct win::system_trace_header_t header;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 int64_t                           due_time;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DueTime
        _m02 void*                             sub_queue;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .SubQueue
        _m03 void*                             timer;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Timer
        _m04 uint32_t                          period;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Period
        _m05 uint32_t                          window_length;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .WindowLength
        _m06 uint32_t                          absolute;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Absolute
                                                             
        SDK_MAGIC_PROPERTIES( "_ETW_TP_EVENT_TIMER_SET.$", 0x44, true, 0x7160aa71d15ff0ec );              
        SDK_FIXED_SIZE( tp_event_timer_set_t, 0x44 );              
    };                                                       
};
#include "magic/tp_event_timer_set_t.end.hpp"
SDK_VERIFY( struct etw::tp_event_timer_set_t, 0x44 );
