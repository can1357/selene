#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_behavior_flags_t.start.hpp"
namespace dxgk
{
    // [union _DXGK_MODE_BEHAVIOR_FLAGS]
    // => WDK 10 (NV)
    //
    union mode_behavior_flags_t            
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint1_t  prioritize_hdr;        //{ +0x0000@0  } | .PrioritizeHDR
        _m01 uint1_t  colorimetric_control;  //{ +0x0000@1  } | .ColorimetricControl
        _m02 uint32_t value;                 //{ +0x0000    } | .Value
                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_MODE_BEHAVIOR_FLAGS.$", 0x0, false, 0x55aa9cb851bd90d7 );                     
        SDK_FIXED_SIZE( mode_behavior_flags_t, 0x4 );                     
    };                                     
};
#include "magic/mode_behavior_flags_t.end.hpp"
SDK_VERIFY( union dxgk::mode_behavior_flags_t, 0x4 );
