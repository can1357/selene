#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/rect_t.hpp"
#include "ddi_mode_rotation_t.hpp"
#include "ddi_multiplane_overlay_blend_t.hpp"
#include "ddi_multiplane_overlay_stereo_format_t.hpp"
#include "ddi_multiplane_overlay_stretch_quality_t.hpp"
#include "ddi_multiplane_overlay_stereo_flip_mode_t.hpp"
#include "ddi_multiplane_overlay_video_frame_format_t.hpp"

#include "magic/ddi_multiplane_overlay_attributes_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES]
    // => WDK 10 (NV)
    //
    struct ddi_multiplane_overlay_attributes_t                                       
    {                                                                                
        using dxgi_ddi_multiplane_overlay_video_frame_format_t = enum dxgi::ddi_multiplane_overlay_video_frame_format_t;                        
        using video_frame_format_t =                             dxgi_ddi_multiplane_overlay_video_frame_format_t ;                        
        using dxgi_ddi_multiplane_overlay_stereo_format_t =      enum dxgi::ddi_multiplane_overlay_stereo_format_t;                        
        using dxgi_ddi_multiplane_overlay_stereo_flip_mode_t =   enum dxgi::ddi_multiplane_overlay_stereo_flip_mode_t;                        
        using dxgi_ddi_multiplane_overlay_stretch_quality_t =    enum dxgi::ddi_multiplane_overlay_stretch_quality_t;                        
                                                                                     
        // WDK 10                                                                    
        //                                                                           
        _m00 uint32_t                                        flags;                    //{ +0x0000    } | .Flags
        _m01 struct tag::rect_t                              src_rect;                 //{ +0x0004    } | .SrcRect
        _m02 struct tag::rect_t                              dst_rect;                 //{ +0x0014    } | .DstRect
        _m03 struct tag::rect_t                              clip_rect;                //{ +0x0024    } | .ClipRect
        _m04 enum dxgi::ddi_mode_rotation_t                  rotation;                 //{ +0x0034    } | .Rotation
        _m05 enum dxgi::ddi_multiplane_overlay_blend_t       blend;                    //{ +0x0038    } | .Blend
        _m06 uint32_t                                        dirty_rect_count;         //{ +0x003c    } | .DirtyRectCount
        _m07 struct tag::rect_t*                             p_dirty_rects;            //{ +0x0040    } | .pDirtyRects
        _m08 video_frame_format_t                            video_frame_format;       //{ +0x0048    } | .VideoFrameFormat
        _m09 uint32_t                                        y_cb_cr_flags;            //{ +0x004c    } | .YCbCrFlags
        _m10 dxgi_ddi_multiplane_overlay_stereo_format_t     stereo_format;            //{ +0x0050    } | .StereoFormat
        _m11 int32_t                                         stereo_left_view_frame0;  //{ +0x0054    } | .StereoLeftViewFrame0
        _m12 int32_t                                         stereo_base_view_frame0;  //{ +0x0058    } | .StereoBaseViewFrame0
        _m13 dxgi_ddi_multiplane_overlay_stereo_flip_mode_t  stereo_flip_mode;         //{ +0x005c    } | .StereoFlipMode
        _m14 dxgi_ddi_multiplane_overlay_stretch_quality_t   stretch_quality;          //{ +0x0060    } | .StretchQuality
                                                                                     
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.$", 0x0, false, 0x97a324d5099ce494 );                        
        SDK_FIXED_SIZE( ddi_multiplane_overlay_attributes_t, 0x68 );                        
    };                                                                               
};
#include "magic/ddi_multiplane_overlay_attributes_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_multiplane_overlay_attributes_t, 0x68 );
