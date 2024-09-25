#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.Flags", flags, 0x0, 0x20, true, 0xbe6d10cc5b26e93b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.SrcRect", src_rect, 0x20, 0x80, true, 0x8498fcbbce22c702)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.DstRect", dst_rect, 0xa0, 0x80, true, 0xdfaae2795a7dd5fd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.ClipRect", clip_rect, 0x120, 0x80, true, 0xf96b1fcb8ac80d0e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_mode_rotation_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.Rotation", rotation, 0x1a0, 0x20, true, 0xfd46d875b0b80cdc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_multiplane_overlay_blend_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.Blend", blend, 0x1c0, 0x20, true, 0xfa8bd351649b3baf)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.DirtyRectCount", dirty_rect_count, 0x1e0, 0x20, true, 0x67ce845e8737fa55)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t*), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.pDirtyRects", p_dirty_rects, 0x200, 0x40, true, 0xde24973d5338e026)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgi_ddi_multiplane_overlay_video_frame_format_t ), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.VideoFrameFormat", video_frame_format, 0x240, 0x20, true, 0xe737a22800357b7e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.YCbCrFlags", y_cb_cr_flags, 0x260, 0x20, true, 0xd9effbe71d7e77ad)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgi_ddi_multiplane_overlay_stereo_format_t ), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.StereoFormat", stereo_format, 0x280, 0x20, true, 0x6b6b12552bb21029)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.StereoLeftViewFrame0", stereo_left_view_frame0, 0x2a0, 0x20, true, 0x86080caa8f5a4387)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.StereoBaseViewFrame0", stereo_base_view_frame0, 0x2c0, 0x20, true, 0x3d1dbe7c0e0ccac0)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgi_ddi_multiplane_overlay_stereo_flip_mode_t ), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.StereoFlipMode", stereo_flip_mode, 0x2e0, 0x20, true, 0x37688cd3c2b0877b)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgi_ddi_multiplane_overlay_stretch_quality_t ), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES.StretchQuality", stretch_quality, 0x300, 0x20, true, 0x3813c564bd672351)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif