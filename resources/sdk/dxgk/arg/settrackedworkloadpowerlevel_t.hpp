#pragma once
#include <sdkgen/support_library.hpp>
#include "../trackedworkload_state_flags_t.hpp"

#include "magic/settrackedworkloadpowerlevel_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL]
    // => WDK 10 (NV)
    //
    struct settrackedworkloadpowerlevel_t                                     
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint32_t                                   power_level;            //{ +0x0000    } | .PowerLevel
        _m01 uint32_t                                   effective_power_level;  //{ +0x0004    } | .EffectivePowerLevel
        _m02 struct dxgk::trackedworkload_state_flags_t flags;                  //{ +0x0008    } | .Flags
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL.$", 0x0, false, 0xa4d6e42685ff35f9 );                      
        SDK_FIXED_SIZE( settrackedworkloadpowerlevel_t, 0xc );                      
    };                                                                        
};
#include "magic/settrackedworkloadpowerlevel_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::settrackedworkloadpowerlevel_t, 0xc );
