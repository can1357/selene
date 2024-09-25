#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/timer_expiration_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_TIMER_EXPIRATION_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timer_expiration_event_t     
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint64_t expected_due_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExpectedDueTime
        _m01 uint64_t timer_address;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimerAddress
        _m02 uint64_t deferred_routine;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeferredRoutine
        _m03 uint8_t  encoded_delay;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EncodedDelay
                                        
        SDK_MAGIC_PROPERTIES( "_ETW_TIMER_EXPIRATION_EVENT.$", 0x20, true, 0xe1495e85d344c392 );                  
        SDK_FIXED_SIZE( timer_expiration_event_t, 0x20 );                  
    };                                  
};
#include "magic/timer_expiration_event_t.end.hpp"
SDK_VERIFY( struct etw::timer_expiration_event_t, 0x20 );
