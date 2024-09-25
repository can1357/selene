#pragma once
#include <sdkgen/support_library.hpp>
#include "wmi_idle_state_t.hpp"

#include "magic/wmi_idle_states_t.start.hpp"
namespace ppm
{
    // [struct PPM_WMI_IDLE_STATES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmi_idle_states_t                                               
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                 
        _m00 uint32_t                                    type;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t                                    count;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Count
        _m02 uint32_t                                    target_state;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TargetState
        _m03 uint32_t                                    old_state;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .OldState
        _m04 uint64_t                                    target_processors;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetProcessors
        _m05 sdk::array<struct ppm::wmi_idle_state_t, 1> state;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .State
                                                                           
        SDK_MAGIC_PROPERTIES( "PPM_WMI_IDLE_STATES.$", 0x38, true, 0x291e604b03304fa3 );                  
        SDK_FIXED_SIZE( wmi_idle_states_t, 0x38 );                         
    };                                                                     
};
#include "magic/wmi_idle_states_t.end.hpp"
SDK_VERIFY( struct ppm::wmi_idle_states_t, 0x38 );
