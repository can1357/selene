#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/tp_event_timer_expiration_end_t.start.hpp"
namespace etw
{
    // [struct _ETW_TP_EVENT_TIMER_EXPIRATION_END]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tp_event_timer_expiration_end_t               
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                               
        _m00 struct win::system_trace_header_t header;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             sub_queue;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SubQueue
                                                         
        SDK_MAGIC_PROPERTIES( "_ETW_TP_EVENT_TIMER_EXPIRATION_END.$", 0x28, true, 0xdda2c00703dc313e );          
        SDK_FIXED_SIZE( tp_event_timer_expiration_end_t, 0x28 );          
    };                                                   
};
#include "magic/tp_event_timer_expiration_end_t.end.hpp"
SDK_VERIFY( struct etw::tp_event_timer_expiration_end_t, 0x28 );
