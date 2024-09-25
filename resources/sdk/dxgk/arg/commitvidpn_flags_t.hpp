#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/commitvidpn_flags_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_COMMITVIDPN_FLAGS]
    // => WDK 10 (NV)
    //
    struct commitvidpn_flags_t             
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint1_t path_power_transition;  //{ +0x0000@0  } | .PathPowerTransition
        _m01 uint1_t path_powered_off;       //{ +0x0000@1  } | .PathPoweredOff
                                           
        SDK_NONVOL_PROPERTIES( "_DXGKARG_COMMITVIDPN_FLAGS.$", 0x0, false, 0x780879eeb99270da );                      
        SDK_FIXED_SIZE( commitvidpn_flags_t, 0x4 );                      
    };                                     
};
#include "magic/commitvidpn_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::commitvidpn_flags_t, 0x4 );
