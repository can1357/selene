#pragma once
#include <sdkgen/support_library.hpp>
#include "../power/action_t.hpp"
#include "../nt/system_power_state_context_t.hpp"

#include "magic/current_broadcast_t.start.hpp"
namespace pop
{
    struct device_sys_state_t;

    // [struct _POP_CURRENT_BROADCAST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct current_broadcast_t                                      
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                          
        _m00 uint8_t                                 in_progress;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InProgress
        _m01 struct nt::system_power_state_context_t system_context;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SystemContext
        _m02 enum power::action_t                    power_action;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PowerAction
        _m03 struct pop::device_sys_state_t*         device_state;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceState
                                                                    
        SDK_MAGIC_PROPERTIES( "_POP_CURRENT_BROADCAST.$", 0x18, true, 0x94720634b004eef3 );               
        SDK_FIXED_SIZE( current_broadcast_t, 0x18 );                
    };                                                              
};
#include "magic/current_broadcast_t.end.hpp"
SDK_VERIFY( struct pop::current_broadcast_t, 0x18 );
