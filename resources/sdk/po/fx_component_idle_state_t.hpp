#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fx_component_idle_state_t.start.hpp"
namespace po
{
    // [struct _PO_FX_COMPONENT_IDLE_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fx_component_idle_state_t        
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint64_t transition_latency;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TransitionLatency
        _m01 uint64_t residency_requirement;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ResidencyRequirement
        _m02 uint32_t nominal_power;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NominalPower
                                            
        SDK_NONVOL_PROPERTIES( "_PO_FX_COMPONENT_IDLE_STATE.$", 0x18, true, 0xe02eb66a43ed426c );                      
        SDK_FIXED_SIZE( fx_component_idle_state_t, 0x18 );                      
    };                                      
};
#include "magic/fx_component_idle_state_t.end.hpp"
SDK_VERIFY( struct po::fx_component_idle_state_t, 0x18 );
