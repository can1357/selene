#pragma once
#include <sdkgen/support_library.hpp>
#include "../fx/power_event_t.hpp"
#include "../wdf/device_power_state_t.hpp"

#include "magic/event_target_state_t.start.hpp"
namespace power
{
    // [struct POWER_EVENT_TARGET_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_target_state_t                          
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                               
        _m00 enum fx::power_event_t         power_event;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PowerEvent
        _m01 enum wdf::device_power_state_t target_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TargetState
                                                         
        SDK_MAGIC_PROPERTIES( "POWER_EVENT_TARGET_STATE.$", 0x8, true, 0x8f37e44121959698 );             
        SDK_FIXED_SIZE( event_target_state_t, 0x8 );             
    };                                                   
};
#include "magic/event_target_state_t.end.hpp"
SDK_VERIFY( struct power::event_target_state_t, 0x8 );
