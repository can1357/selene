#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_component_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_POWER_COMPONENT_FLAGS]
    // => WDK 10 (NV)
    //
    struct power_component_flags_t                        
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint1_t  driver_completes_f_state_transition;  //{ +0x0000@1  } | .DriverCompletesFStateTransition
        _m01 uint1_t  transition_to_f0_on_dx;               //{ +0x0000@2  } | .TransitionTo_F0_OnDx
        _m02 uint1_t  no_debounce;                          //{ +0x0000@3  } | .NoDebounce
        _m03 uint1_t  active_in_d3;                         //{ +0x0000@4  } | .ActiveInD3
        _m04 uint32_t value;                                //{ +0x0000    } | .Value
                                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_POWER_COMPONENT_FLAGS.$", 0x0, false, 0xb80b3b620d3ef70c );                                    
        SDK_FIXED_SIZE( power_component_flags_t, 0x4 );                                    
    };                                                    
};
#include "magic/power_component_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::power_component_flags_t, 0x4 );
