#pragma once
#include <sdkgen/support_library.hpp>
#include "power_idle_events_t.hpp"
#include "power_idle_states_t.hpp"

#include "magic/power_idle_target_state_t.start.hpp"
namespace fx
{
    // [struct FxPowerIdleTargetState]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_idle_target_state_t                       
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                 
        _m00 enum fx::power_idle_events_t power_idle_event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PowerIdleEvent
        _m01 enum fx::power_idle_states_t power_idle_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PowerIdleState
                                                           
        SDK_MAGIC_PROPERTIES( "FxPowerIdleTargetState.$", 0x8, true, 0x596f3deb6d716a8 );                 
        SDK_FIXED_SIZE( power_idle_target_state_t, 0x8 );                 
    };                                                     
};
#include "magic/power_idle_target_state_t.end.hpp"
SDK_VERIFY( struct fx::power_idle_target_state_t, 0x8 );
