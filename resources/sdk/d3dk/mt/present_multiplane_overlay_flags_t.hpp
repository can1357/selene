#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/present_multiplane_overlay_flags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS]
    // => WDK 10 (NV)
    //
    struct present_multiplane_overlay_flags_t    
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint1_t  flip_stereo;                 //{ +0x0000@0  } | .FlipStereo
        _m01 uint1_t  flip_stereo_temporary_mono;  //{ +0x0000@1  } | .FlipStereoTemporaryMono
        _m02 uint1_t  flip_stereo_prefer_right;    //{ +0x0000@2  } | .FlipStereoPreferRight
        _m03 uint1_t  flip_do_not_wait;            //{ +0x0000@3  } | .FlipDoNotWait
        _m04 uint1_t  flip_do_not_flip;            //{ +0x0000@4  } | .FlipDoNotFlip
        _m05 uint1_t  flip_restart;                //{ +0x0000@5  } | .FlipRestart
        _m06 uint1_t  duration_valid;              //{ +0x0000@6  } | .DurationValid
        _m07 uint1_t  hdr_meta_data_valid;         //{ +0x0000@7  } | .HDRMetaDataValid
        _m08 uint1_t  hmd;                         //{ +0x0000@8  } | .HMD
        _m09 uint1_t  true_immediate;              //{ +0x0000@9  } | .TrueImmediate
        _m10 uint32_t value;                       //{ +0x0000    } | .Value
                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS.$", 0x0, false, 0xc8f1f1f6340bc3b );                           
        SDK_FIXED_SIZE( present_multiplane_overlay_flags_t, 0x4 );                           
    };                                           
};
#include "magic/present_multiplane_overlay_flags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::present_multiplane_overlay_flags_t, 0x4 );
