#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/fx_component_v1_t.start.hpp"
namespace po
{
    struct fx_component_idle_state_t;

    // [struct _PO_FX_COMPONENT_V1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fx_component_v1_t                                                   
    {                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                     
        _m00 struct nt::guid_t                     id;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 uint32_t                              idle_state_count;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .IdleStateCount
        _m02 uint32_t                              deepest_wakeable_idle_state;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .DeepestWakeableIdleState
        _m03 struct po::fx_component_idle_state_t* idle_states;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .IdleStates
                                                                               
        SDK_NONVOL_PROPERTIES( "_PO_FX_COMPONENT_V1.$", 0x20, true, 0xc55e467e7ba60f4 );                            
        SDK_FIXED_SIZE( fx_component_v1_t, 0x20 );                             
    };                                                                         
};
#include "magic/fx_component_v1_t.end.hpp"
SDK_VERIFY( struct po::fx_component_v1_t, 0x20 );
