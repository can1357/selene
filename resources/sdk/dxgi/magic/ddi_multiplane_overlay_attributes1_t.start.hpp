#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.Flags", flags, 0x0, 0x20, true, 0xd7fbcc9c9a30277c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.SrcRect", src_rect, 0x20, 0x80, true, 0xb137b1c3bf3b5317)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.DstRect", dst_rect, 0xa0, 0x80, true, 0x4ecbee6be7c78739)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.ClipRect", clip_rect, 0x120, 0x80, true, 0x95aad65e4f68da6a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_mode_rotation_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.Rotation", rotation, 0x1a0, 0x20, true, 0xf1ecd378a5629ba)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_multiplane_overlay_blend_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.Blend", blend, 0x1c0, 0x20, true, 0xe7b0a19b3bb7dd80)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.DirtyRectCount", dirty_rect_count, 0x1e0, 0x20, true, 0x8e06564fade0bc15)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t*), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.pDirtyRects", p_dirty_rects, 0x200, 0x40, true, 0xb789f64c95340c19)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgi_ddi_multiplane_overlay_video_frame_format_t ), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.VideoFrameFormat", video_frame_format, 0x240, 0x20, true, 0x8e74af3f4c23aaa4)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::color_space_type_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.ColorSpace", color_space, 0x260, 0x20, true, 0x7e802e430d1a3508)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgi_ddi_multiplane_overlay_stereo_format_t ), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.StereoFormat", stereo_format, 0x280, 0x20, true, 0xa1d3d47df34e32bc)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.StereoLeftViewFrame0", stereo_left_view_frame0, 0x2a0, 0x20, true, 0x49c3869ca8cd0c15)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.StereoBaseViewFrame0", stereo_base_view_frame0, 0x2c0, 0x20, true, 0x5d54e7a3deb630a7)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgi_ddi_multiplane_overlay_stereo_flip_mode_t ), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.StereoFlipMode", stereo_flip_mode, 0x2e0, 0x20, true, 0xd9885e87f7dc76b1)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgi_ddi_multiplane_overlay_stretch_quality_t ), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.StretchQuality", stretch_quality, 0x300, 0x20, true, 0x8e5de8e27d82cc0c)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_ATTRIBUTES1.ColorKey", color_key, 0x320, 0x20, true, 0xe7f23cbcdc935afb)
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
#define _m15
#endif