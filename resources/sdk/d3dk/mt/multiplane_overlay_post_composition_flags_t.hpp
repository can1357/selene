#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multiplane_overlay_post_composition_flags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_post_composition_flags_t
    {                                                 
        // WDK 10                     
        //                            
        _m00 uint1_t  vertical_flip;                    //{ +0x0000@0  } | .VerticalFlip
        _m01 uint1_t  horizontal_flip;                  //{ +0x0000@1  } | .HorizontalFlip
        _m02 uint32_t value;                            //{ +0x0000    } | .Value
                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS.$", 0x0, false, 0xe455eca71ea339d5 );                
        SDK_FIXED_SIZE( multiplane_overlay_post_composition_flags_t, 0x4 );                
    };                                                
};
#include "magic/multiplane_overlay_post_composition_flags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::multiplane_overlay_post_composition_flags_t, 0x4 );
