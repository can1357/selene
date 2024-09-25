#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.Flags", flags, 0x0, 0x20, true, 0x37d55351c7438b38)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.SrcRect", src_rect, 0x20, 0x80, true, 0x65d940c7f367b420)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.DstRect", dst_rect, 0xa0, 0x80, true, 0x4f0ab7d748c9869d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.ClipRect", clip_rect, 0x120, 0x80, true, 0xc8743d7b562ced5d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.Rotation", rotation, 0x1a0, 0x20, true, 0x90685d14039bf396)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::multiplane_overlay_blend_t), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.Blend", blend, 0x1c0, 0x20, true, 0xc124b5fb7bdee527)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.DirtyRectCount", dirty_rect_count, 0x1e0, 0x20, true, 0x1011bbab919accc6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t*), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.pDirtyRects", p_dirty_rects, 0x200, 0x40, true, 0xf204a52741778704)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmt_multiplane_overlay_video_frame_format_t ), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.VideoFrameFormat", video_frame_format, 0x240, 0x20, true, 0x18e6070664e9fe4e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.YCbCrFlags", y_cb_cr_flags, 0x260, 0x20, true, 0xe1606606cc86f44f)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmt_multiplane_overlay_stereo_format_t ), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.StereoFormat", stereo_format, 0x280, 0x20, true, 0xfff49e7153b46841)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.StereoLeftViewFrame0", stereo_left_view_frame0, 0x2a0, 0x20, true, 0x81a359e08a2a28c7)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.StereoBaseViewFrame0", stereo_base_view_frame0, 0x2c0, 0x20, true, 0x731bbe3bed5442a9)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkmt_multiplane_overlay_stereo_flip_mode_t ), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.StereoFlipMode", stereo_flip_mode, 0x2e0, 0x20, true, 0xcd0bfde31564f566)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkmt_multiplane_overlay_stretch_quality_t ), "D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES.StretchQuality", stretch_quality, 0x300, 0x20, true, 0xd0a3d0901457f231)
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