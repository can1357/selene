#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/presentflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PRESENTFLAGS]
    // => WDK 10 (NV)
    //
    struct presentflags_t                           
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint1_t  blt;                            //{ +0x0000@0  } | .Blt
        _m01 uint1_t  color_fill;                     //{ +0x0000@1  } | .ColorFill
        _m02 uint1_t  flip;                           //{ +0x0000@2  } | .Flip
        _m03 uint1_t  flip_with_no_wait;              //{ +0x0000@3  } | .FlipWithNoWait
        _m04 uint1_t  src_color_key;                  //{ +0x0000@4  } | .SrcColorKey
        _m05 uint1_t  dst_color_key;                  //{ +0x0000@5  } | .DstColorKey
        _m06 uint1_t  linear_to_srgb;                 //{ +0x0000@6  } | .LinearToSrgb
        _m07 uint1_t  rotate;                         //{ +0x0000@7  } | .Rotate
        _m08 uint1_t  flip_stereo;                    //{ +0x0000@8  } | .FlipStereo
        _m09 uint1_t  flip_stereo_temporary_mono;     //{ +0x0000@9  } | .FlipStereoTemporaryMono
        _m10 uint1_t  flip_stereo_prefer_right;       //{ +0x0000@10 } | .FlipStereoPreferRight
        _m11 uint1_t  blt_stereo_use_right;           //{ +0x0000@11 } | .BltStereoUseRight
        _m12 uint1_t  flip_with_multi_plane_overlay;  //{ +0x0000@12 } | .FlipWithMultiPlaneOverlay
        _m13 uint1_t  redirected_flip;                //{ +0x0000@13 } | .RedirectedFlip
        _m14 uint32_t value;                          //{ +0x0000    } | .Value
                                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_PRESENTFLAGS.$", 0x0, false, 0x4d0943dae7ac4e0a );                              
        SDK_FIXED_SIZE( presentflags_t, 0x4 );                              
    };                                              
};
#include "magic/presentflags_t.end.hpp"
SDK_VERIFY( struct dxgk::presentflags_t, 0x4 );
