#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"
#include "../d3d/ddi/rotation_t.hpp"
#include "multiplane_overlay_blend_t.hpp"
#include "multiplane_overlay_flags_t.hpp"
#include "../d3d/ddi/color_space_type_t.hpp"
#include "multiplane_overlay_stretch_quality_t.hpp"

#include "magic/multiplane_overlay_attributes3_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_attributes3_t                                   
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 struct dxgk::multiplane_overlay_flags_t         flags;             //{ +0x0000    } | .Flags
        _m01 struct tag::rect_t                              src_rect;          //{ +0x0004    } | .SrcRect
        _m02 struct tag::rect_t                              dst_rect;          //{ +0x0014    } | .DstRect
        _m03 struct tag::rect_t                              clip_rect;         //{ +0x0024    } | .ClipRect
        _m04 enum d3d::ddi::rotation_t                       rotation;          //{ +0x0034    } | .Rotation
        _m05 struct dxgk::multiplane_overlay_blend_t         blend;             //{ +0x0038    } | .Blend
        _m06 enum d3d::ddi::color_space_type_t               color_space_type;  //{ +0x003c    } | .ColorSpaceType
        _m07 enum dxgk::multiplane_overlay_stretch_quality_t stretch_quality;   //{ +0x0040    } | .StretchQuality
        _m08 uint32_t                                        sdr_white_level;   //{ +0x0044    } | .SDRWhiteLevel
        _m09 uint32_t                                        dirty_rect_cnt;    //{ +0x0048    } | .DirtyRectCnt
        _m10 const struct tag::rect_t*                       p_dirty_rects;     //{ +0x0050    } | .pDirtyRects
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3.$", 0x0, false, 0x6efa3b14c0785472 );                 
        SDK_FIXED_SIZE( multiplane_overlay_attributes3_t, 0x58 );                 
    };                                                                        
};
#include "magic/multiplane_overlay_attributes3_t.end.hpp"
SDK_VERIFY( struct dxgk::multiplane_overlay_attributes3_t, 0x58 );
