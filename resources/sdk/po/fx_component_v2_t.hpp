#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/fx_component_v2_t.start.hpp"
namespace po
{
    struct fx_component_idle_state_t;

    // [struct _PO_FX_COMPONENT_V2]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fx_component_v2_t                                                   
    {                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                     
        _m00 struct nt::guid_t                     id;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 uint64_t                              flags;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m02 uint32_t                              deepest_wakeable_idle_state;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DeepestWakeableIdleState
        _m03 uint32_t                              idle_state_count;             //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .IdleStateCount
        _m04 struct po::fx_component_idle_state_t* idle_states;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .IdleStates
        _m05 uint32_t                              provider_count;               //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ProviderCount
        _m06 uint32_t*                             providers;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Providers
                                                                               
        SDK_NONVOL_PROPERTIES( "_PO_FX_COMPONENT_V2.$", 0x38, true, 0x9f252891d809c06c );                            
        SDK_FIXED_SIZE( fx_component_v2_t, 0x38 );                             
    };                                                                         
};
#include "magic/fx_component_v2_t.end.hpp"
SDK_VERIFY( struct po::fx_component_v2_t, 0x38 );
