#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multiplane_overlay_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_caps_t                    
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
        _m11 uint1_t  version3ddi_support;                //{ +0x0000@11 } | .Version3DDISupport
        _m12 uint32_t value;                              //{ +0x0000    } | .Value
                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.$", 0x0, false, 0x56a6e62aa22b460b );                                  
        SDK_FIXED_SIZE( multiplane_overlay_caps_t, 0x4 );                                  
    };                                                  
};
#include "magic/multiplane_overlay_caps_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::multiplane_overlay_caps_t, 0x4 );
