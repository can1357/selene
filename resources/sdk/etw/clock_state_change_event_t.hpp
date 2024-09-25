#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/clock_state_change_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_CLOCK_STATE_CHANGE_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct clock_state_change_event_t        
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint8_t  new_state;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NewState
        _m01 uint8_t  prev_state;              //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .PrevState
        _m02 uint64_t delivered_increment;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeliveredIncrement
        _m03 uint64_t requested_increment;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RequestedIncrement
        _m04 uint64_t next_clock_update_time;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextClockUpdateTime
                                             
        SDK_MAGIC_PROPERTIES( "_ETW_CLOCK_STATE_CHANGE_EVENT.$", 0x18, true, 0xfea147745f38509a );                       
        SDK_FIXED_SIZE( clock_state_change_event_t, 0x18 );                       
    };                                       
};
#include "magic/clock_state_change_event_t.end.hpp"
SDK_VERIFY( struct etw::clock_state_change_event_t, 0x18 );
