#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timer_expiration_start_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_TIMER_EXPIRATION_START_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timer_expiration_start_event_t      
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint64_t interrupt_time;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterruptTime
                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m01 uint8_t  hr_timer_expiration_only;  //{ +0x0008    +0x0008    +0x0008    } | .HrTimerExpirationOnly
                                               
        SDK_MAGIC_PROPERTIES( "_ETW_TIMER_EXPIRATION_START_EVENT.$", 0x10, true, 0x2099888784142a9b );                         
        SDK_DYNAMIC_SIZE( timer_expiration_start_event_t );                         
    };                                         
};
#include "magic/timer_expiration_start_event_t.end.hpp"
