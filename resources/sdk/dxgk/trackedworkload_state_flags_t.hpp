#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trackedworkload_state_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_TRACKEDWORKLOAD_STATE_FLAGS]
    // => WDK 10 (NV)
    //
    struct trackedworkload_state_flags_t
    {                                   
        // WDK 10                   
        //                          
        _m00 uint1_t  saturated;          //{ +0x0000@0  } | .Saturated
        _m01 uint1_t  optimal_level;      //{ +0x0000@1  } | .OptimalLevel
        _m02 uint32_t value;              //{ +0x0000    } | .Value
                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_TRACKEDWORKLOAD_STATE_FLAGS.$", 0x0, false, 0xadbba4b9610430ae );              
        SDK_FIXED_SIZE( trackedworkload_state_flags_t, 0x4 );              
    };                                  
};
#include "magic/trackedworkload_state_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::trackedworkload_state_flags_t, 0x4 );
