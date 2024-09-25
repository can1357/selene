#pragma once
#include <sdkgen/support_library.hpp>
#include "wake_interrupt_events_t.hpp"
#include "wake_interrupt_states_t.hpp"

#include "magic/wake_interrupt_target_state_t.start.hpp"
namespace fx
{
    // [struct FxWakeInterruptTargetState]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wake_interrupt_target_state_t                           
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                         
        _m00 enum fx::wake_interrupt_events_t wake_interrupt_event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WakeInterruptEvent
        _m01 enum fx::wake_interrupt_states_t wake_interrupt_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .WakeInterruptState
                                                                   
        SDK_MAGIC_PROPERTIES( "FxWakeInterruptTargetState.$", 0x8, true, 0x8f9a41d6ae317a3f );                     
        SDK_FIXED_SIZE( wake_interrupt_target_state_t, 0x8 );                     
    };                                                             
};
#include "magic/wake_interrupt_target_state_t.end.hpp"
SDK_VERIFY( struct fx::wake_interrupt_target_state_t, 0x8 );
