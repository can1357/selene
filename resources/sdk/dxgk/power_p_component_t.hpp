#pragma once
#include <sdkgen/support_library.hpp>
#include "power_p_state_t.hpp"
#include "power_component_p_flags_t.hpp"

#include "magic/power_p_component_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_POWER_P_COMPONENT]
    // => WDK 10 (NV)
    //
    struct power_p_component_t                                        
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint32_t                                     state_count;  //{ +0x0000    } | .StateCount
        _m01 sdk::array<struct dxgk::power_p_state_t, 32> states;       //{ +0x0004    } | .States
        _m02 struct dxgk::power_component_p_flags_t       flags;        //{ +0x0084    } | .Flags
                                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_POWER_P_COMPONENT.$", 0x0, false, 0x51689633e1464178 );            
        SDK_FIXED_SIZE( power_p_component_t, 0x88 );                  
    };                                                                
};
#include "magic/power_p_component_t.end.hpp"
SDK_VERIFY( struct dxgk::power_p_component_t, 0x88 );
