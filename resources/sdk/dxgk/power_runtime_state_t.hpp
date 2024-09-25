#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_runtime_state_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_POWER_RUNTIME_STATE]
    // => WDK 10 (NV)
    //
    struct power_runtime_state_t            
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint64_t transition_latency;     //{ +0x0000    } | .TransitionLatency
        _m01 uint64_t residency_requirement;  //{ +0x0008    } | .ResidencyRequirement
        _m02 uint32_t nominal_power;          //{ +0x0010    } | .NominalPower
                                            
        SDK_NONVOL_PROPERTIES( "_DXGK_POWER_RUNTIME_STATE.$", 0x0, false, 0x4a2c76360544e9d1 );                      
        SDK_FIXED_SIZE( power_runtime_state_t, 0x18 );                      
    };                                      
};
#include "magic/power_runtime_state_t.end.hpp"
SDK_VERIFY( struct dxgk::power_runtime_state_t, 0x18 );
