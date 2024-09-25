#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multiplane_overlay_blend_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MULTIPLANE_OVERLAY_BLEND]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_blend_t
    {                                
        // WDK 10                 
        //                        
        _m00 uint1_t  alpha_blend;     //{ +0x0000@0  } | .AlphaBlend
        _m01 uint32_t value;           //{ +0x0000    } | .Value
                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_MULTIPLANE_OVERLAY_BLEND.$", 0x0, false, 0xa7d3b77fac9cc3d8 );            
        SDK_FIXED_SIZE( multiplane_overlay_blend_t, 0x4 );            
    };                               
};
#include "magic/multiplane_overlay_blend_t.end.hpp"
SDK_VERIFY( struct dxgk::multiplane_overlay_blend_t, 0x4 );
