#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"
#include "../d3d/ddi/rotation_t.hpp"
#include "multiplane_overlay_post_composition_flags_t.hpp"

#include "magic/multiplane_overlay_post_composition_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_post_composition_t
    {                                           
        using flags_t = struct dxgk::multiplane_overlay_post_composition_flags_t;         
                                                
        // WDK 10                               
        //                                      
        _m00 flags_t                   flags;     //{ +0x0000    } | .Flags
        _m01 struct tag::rect_t        src_rect;  //{ +0x0004    } | .SrcRect
        _m02 struct tag::rect_t        dst_rect;  //{ +0x0014    } | .DstRect
        _m03 enum d3d::ddi::rotation_t rotation;  //{ +0x0024    } | .Rotation
                                                
        SDK_NONVOL_PROPERTIES( "_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION.$", 0x0, false, 0xc17e71053e492fd0 );         
        SDK_FIXED_SIZE( multiplane_overlay_post_composition_t, 0x28 );         
    };                                          
};
#include "magic/multiplane_overlay_post_composition_t.end.hpp"
SDK_VERIFY( struct dxgk::multiplane_overlay_post_composition_t, 0x28 );
