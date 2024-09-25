#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cancel_timer_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_CANCEL_TIMER_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cancel_timer_event_t     
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint64_t timer_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimerAddress
                                    
        SDK_MAGIC_PROPERTIES( "_ETW_CANCEL_TIMER_EVENT.$", 0x8, true, 0x371379fba8a97636 );              
        SDK_FIXED_SIZE( cancel_timer_event_t, 0x8 );              
    };                              
};
#include "magic/cancel_timer_event_t.end.hpp"
SDK_VERIFY( struct etw::cancel_timer_event_t, 0x8 );
