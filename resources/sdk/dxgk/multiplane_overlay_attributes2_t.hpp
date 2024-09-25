#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"
#include "../d3d/ddi/rotation_t.hpp"
#include "multiplane_overlay_blend_t.hpp"
#include "multiplane_overlay_flags_t.hpp"
#include "../d3d/ddi/color_space_type_t.hpp"
#include "multiplane_overlay_stereo_format_t.hpp"
#include "multiplane_overlay_stretch_quality_t.hpp"
#include "multiplane_overlay_stereo_flip_mode_t.hpp"
#include "multiplane_overlay_video_frame_format_t.hpp"

#include "magic/multiplane_overlay_attributes2_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_attributes2_t                                           
    {                                                                                 
        using dxgk_multiplane_overlay_video_frame_format_t = enum dxgk::multiplane_overlay_video_frame_format_t;                        
                                                                                      
        // WDK 10                                                                     
        //                                                                            
        _m00 struct dxgk::multiplane_overlay_flags_t          flags;                    //{ +0x0000    } | .Flags
        _m01 struct tag::rect_t                               src_rect;                 //{ +0x0004    } | .SrcRect
        _m02 struct tag::rect_t                               dst_rect;                 //{ +0x0014    } | .DstRect
        _m03 struct tag::rect_t                               clip_rect;                //{ +0x0024    } | .ClipRect
        _m04 enum d3d::ddi::rotation_t                        rotation;                 //{ +0x0034    } | .Rotation
        _m05 struct dxgk::multiplane_overlay_blend_t          blend;                    //{ +0x0038    } | .Blend
        _m06 dxgk_multiplane_overlay_video_frame_format_t     video_frame_format;       //{ +0x003c    } | .VideoFrameFormat
        _m07 enum d3d::ddi::color_space_type_t                color_space_type;         //{ +0x0040    } | .ColorSpaceType
        _m08 enum dxgk::multiplane_overlay_stereo_format_t    stereo_format;            //{ +0x0044    } | .StereoFormat
        _m09 int32_t                                          stereo_left_view_frame0;  //{ +0x0048    } | .StereoLeftViewFrame0
        _m10 int32_t                                          stereo_base_view_frame0;  //{ +0x004c    } | .StereoBaseViewFrame0
        _m11 enum dxgk::multiplane_overlay_stereo_flip_mode_t stereo_flip_mode;         //{ +0x0050    } | .StereoFlipMode
        _m12 enum dxgk::multiplane_overlay_stretch_quality_t  stretch_quality;          //{ +0x0054    } | .StretchQuality
                                                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.$", 0x0, false, 0xae662e614e91fc77 );                        
        SDK_FIXED_SIZE( multiplane_overlay_attributes2_t, 0x5c );                        
    };                                                                                
};
#include "magic/multiplane_overlay_attributes2_t.end.hpp"
SDK_VERIFY( struct dxgk::multiplane_overlay_attributes2_t, 0x5c );
