#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_pofx_component_idle_state_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_POFX_COMPONENT_IDLE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_pofx_component_idle_state_t 
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t version;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t size;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint64_t transition_latency;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TransitionLatency
        _m03 uint64_t residency_requirement;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResidencyRequirement
        _m04 uint32_t nominal_power;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NominalPower
                                            
        SDK_MAGIC_PROPERTIES( "_STOR_POFX_COMPONENT_IDLE_STATE.$", 0x20, true, 0xc24b3ca5d7a43cf8 );                      
        SDK_FIXED_SIZE( stor_pofx_component_idle_state_t, 0x20 );                      
    };                                      
};
#include "magic/stor_pofx_component_idle_state_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_pofx_component_idle_state_t, 0x20 );
