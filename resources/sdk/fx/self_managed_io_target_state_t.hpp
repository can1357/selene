#pragma once
#include <sdkgen/support_library.hpp>
#include "self_managed_io_events_t.hpp"
#include "self_managed_io_states_t.hpp"

#include "magic/self_managed_io_target_state_t.start.hpp"
namespace fx
{
    // [struct FxSelfManagedIoTargetState]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct self_managed_io_target_state_t                            
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                           
        _m00 enum fx::self_managed_io_events_t self_managed_io_event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SelfManagedIoEvent
        _m01 enum fx::self_managed_io_states_t self_managed_io_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SelfManagedIoState
                                                                     
        SDK_MAGIC_PROPERTIES( "FxSelfManagedIoTargetState.$", 0x8, true, 0x20645bd0dc79e3f4 );                      
        SDK_FIXED_SIZE( self_managed_io_target_state_t, 0x8 );                      
    };                                                               
};
#include "magic/self_managed_io_target_state_t.end.hpp"
SDK_VERIFY( struct fx::self_managed_io_target_state_t, 0x8 );
