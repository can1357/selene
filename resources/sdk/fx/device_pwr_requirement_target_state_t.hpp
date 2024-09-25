#pragma once
#include <sdkgen/support_library.hpp>
#include "device_pwr_requirement_events_t.hpp"
#include "device_pwr_requirement_states_t.hpp"

#include "magic/device_pwr_requirement_target_state_t.start.hpp"
namespace fx
{
    // [struct FxDevicePwrRequirementTargetState]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_pwr_requirement_target_state_t                
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                      
        _m00 enum fx::device_pwr_requirement_events_t dpr_event;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DprEvent
        _m01 enum fx::device_pwr_requirement_states_t dpr_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DprState
                                                                
        SDK_MAGIC_PROPERTIES( "FxDevicePwrRequirementTargetState.$", 0x8, true, 0xa1b5111de56ecf51 );          
        SDK_FIXED_SIZE( device_pwr_requirement_target_state_t, 0x8 );          
    };                                                          
};
#include "magic/device_pwr_requirement_target_state_t.end.hpp"
SDK_VERIFY( struct fx::device_pwr_requirement_target_state_t, 0x8 );
