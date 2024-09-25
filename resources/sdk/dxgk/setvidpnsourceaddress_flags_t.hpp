#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setvidpnsourceaddress_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SETVIDPNSOURCEADDRESS_FLAGS]
    // => WDK 10 (NV)
    //
    struct setvidpnsourceaddress_flags_t         
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint1_t  mode_change;                 //{ +0x0000@0  } | .ModeChange
        _m01 uint1_t  flip_immediate;              //{ +0x0000@1  } | .FlipImmediate
        _m02 uint1_t  flip_on_next_v_sync;         //{ +0x0000@2  } | .FlipOnNextVSync
        _m03 uint1_t  flip_stereo;                 //{ +0x0000@3  } | .FlipStereo
        _m04 uint1_t  flip_stereo_temporary_mono;  //{ +0x0000@4  } | .FlipStereoTemporaryMono
        _m05 uint1_t  flip_stereo_prefer_right;    //{ +0x0000@5  } | .FlipStereoPreferRight
        _m06 uint1_t  shared_primary_transition;   //{ +0x0000@6  } | .SharedPrimaryTransition
        _m07 uint1_t  independent_flip_exclusive;  //{ +0x0000@7  } | .IndependentFlipExclusive
        _m08 uint1_t  move_flip;                   //{ +0x0000@8  } | .MoveFlip
        _m09 uint32_t value;                       //{ +0x0000    } | .Value
                                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_SETVIDPNSOURCEADDRESS_FLAGS.$", 0x0, false, 0x9cc83871ee35fba3 );                           
        SDK_FIXED_SIZE( setvidpnsourceaddress_flags_t, 0x4 );                           
    };                                           
};
#include "magic/setvidpnsourceaddress_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::setvidpnsourceaddress_flags_t, 0x4 );
