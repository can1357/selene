#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fx_idle_state_t.start.hpp"
namespace pop
{
    // [struct _POP_FX_IDLE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_idle_state_t                  
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint64_t transition_latency;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TransitionLatency
        _m01 uint64_t residency_requirement;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResidencyRequirement
        _m02 uint32_t nominal_power;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NominalPower
                                            
        SDK_MAGIC_PROPERTIES( "_POP_FX_IDLE_STATE.$", 0x18, true, 0x877ae819fc355615 );                      
        SDK_FIXED_SIZE( fx_idle_state_t, 0x18 );                      
    };                                      
};
#include "magic/fx_idle_state_t.end.hpp"
SDK_VERIFY( struct pop::fx_idle_state_t, 0x18 );
