#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multiplaneoverlaycaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MULTIPLANEOVERLAYCAPS]
    // => WDK 10 (NV)
    //
    struct multiplaneoverlaycaps_t                      
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint1_t  rotation;                           //{ +0x0000@0  } | .Rotation
        _m01 uint1_t  rotation_without_independent_flip;  //{ +0x0000@1  } | .RotationWithoutIndependentFlip
        _m02 uint1_t  vertical_flip;                      //{ +0x0000@2  } | .VerticalFlip
        _m03 uint1_t  horizontal_flip;                    //{ +0x0000@3  } | .HorizontalFlip
        _m04 uint1_t  stretch_rgb;                        //{ +0x0000@4  } | .StretchRGB
        _m05 uint1_t  stretch_yuv;                        //{ +0x0000@5  } | .StretchYUV
        _m06 uint1_t  bilinear_filter;                    //{ +0x0000@6  } | .BilinearFilter
        _m07 uint1_t  high_filter;                        //{ +0x0000@7  } | .HighFilter
        _m08 uint1_t  shared;                             //{ +0x0000@8  } | .Shared
        _m09 uint1_t  immediate;                          //{ +0x0000@9  } | .Immediate
        _m10 uint1_t  plane0_for_virtual_mode_only;       //{ +0x0000@10 } | .Plane0ForVirtualModeOnly
        _m11 uint32_t value;                              //{ +0x0000    } | .Value
                                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_MULTIPLANEOVERLAYCAPS.$", 0x0, false, 0x4f6059beb258ba2c );                                  
        SDK_FIXED_SIZE( multiplaneoverlaycaps_t, 0x4 );                                  
    };                                                  
};
#include "magic/multiplaneoverlaycaps_t.end.hpp"
SDK_VERIFY( struct dxgk::multiplaneoverlaycaps_t, 0x4 );
