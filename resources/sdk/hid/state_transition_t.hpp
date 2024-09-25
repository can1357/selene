#pragma once
#include <sdkgen/support_library.hpp>
#include "event_t.hpp"
#include "state_t.hpp"

#include "magic/state_transition_t.start.hpp"
namespace hid
{
    // [struct _STATE_TRANSITION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct state_transition_t                
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                   
        _m00 union hid::event_t event;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Event
        _m01 union hid::state_t target_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TargetState
                                             
        SDK_MAGIC_PROPERTIES( "_STATE_TRANSITION.$", 0x8, true, 0x534ea0552859a592 );             
        SDK_FIXED_SIZE( state_transition_t, 0x8 );             
    };                                       
};
#include "magic/state_transition_t.end.hpp"
SDK_VERIFY( struct hid::state_transition_t, 0x8 );
