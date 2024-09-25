#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.Flags", flags, 0x0, 0x20, true, 0x9c7e97c158b4470c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.SrcRect", src_rect, 0x20, 0x80, true, 0x2ab47b012765895f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.DstRect", dst_rect, 0xa0, 0x80, true, 0x951480559184da80)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.ClipRect", clip_rect, 0x120, 0x80, true, 0x47fcec49df320a05)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.Rotation", rotation, 0x1a0, 0x20, true, 0x6f646fc833858268)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::multiplane_overlay_blend_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.Blend", blend, 0x1c0, 0x20, true, 0x6006f581bb76d416)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.DirtyRectCount", dirty_rect_count, 0x1e0, 0x20, true, 0x49b79e4e0375d04)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t*), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.pDirtyRects", p_dirty_rects, 0x200, 0x40, true, 0x1c7c832f0d1f96)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmt_multiplane_overlay_video_frame_format_t ), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.VideoFrameFormat", video_frame_format, 0x240, 0x20, true, 0xb7dd8cd291ea7c59)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::color_space_type_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.ColorSpace", color_space, 0x260, 0x20, true, 0x42808644f10423a0)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmt_multiplane_overlay_stereo_format_t ), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.StereoFormat", stereo_format, 0x280, 0x20, true, 0xa7b4459314f095a2)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.StereoLeftViewFrame0", stereo_left_view_frame0, 0x2a0, 0x20, true, 0x16561c6fe5c3818d)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.StereoBaseViewFrame0", stereo_base_view_frame0, 0x2c0, 0x20, true, 0x35fadad3e690bd62)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkmt_multiplane_overlay_stereo_flip_mode_t ), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.StereoFlipMode", stereo_flip_mode, 0x2e0, 0x20, true, 0x82961a8fb4a58400)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkmt_multiplane_overlay_stretch_quality_t ), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2.StretchQuality", stretch_quality, 0x300, 0x20, true, 0xf97b07bc53fcf142)
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