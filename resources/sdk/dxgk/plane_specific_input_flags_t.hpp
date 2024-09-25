#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plane_specific_input_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PLANE_SPECIFIC_INPUT_FLAGS]
    // => WDK 10 (NV)
    //
    struct plane_specific_input_flags_t          
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint1_t  enabled;                     //{ +0x0000@0  } | .Enabled
        _m01 uint1_t  flip_immediate;              //{ +0x0000@1  } | .FlipImmediate
        _m02 uint1_t  flip_on_next_v_sync;         //{ +0x0000@2  } | .FlipOnNextVSync
        _m03 uint1_t  shared_primary_transition;   //{ +0x0000@3  } | .SharedPrimaryTransition
        _m04 uint1_t  independent_flip_exclusive;  //{ +0x0000@4  } | .IndependentFlipExclusive
        _m05 uint1_t  flip_immediate_no_tearing;   //{ +0x0000@5  } | .FlipImmediateNoTearing
        _m06 uint32_t value;                       //{ +0x0000    } | .Value
                                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_PLANE_SPECIFIC_INPUT_FLAGS.$", 0x0, false, 0xf5d1f807e32caf23 );                           
        SDK_FIXED_SIZE( plane_specific_input_flags_t, 0x4 );                           
    };                                           
};
#include "magic/plane_specific_input_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::plane_specific_input_flags_t, 0x4 );
