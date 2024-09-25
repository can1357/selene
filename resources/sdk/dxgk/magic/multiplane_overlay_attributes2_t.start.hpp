#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_flags_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.Flags", flags, 0x0, 0x20, true, 0xd69c9586d0660a1f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.SrcRect", src_rect, 0x20, 0x80, true, 0x8bc1be85c108dd7d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.DstRect", dst_rect, 0xa0, 0x80, true, 0xf716b7be1ddd0daa)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.ClipRect", clip_rect, 0x120, 0x80, true, 0xef63ba78315ce105)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.Rotation", rotation, 0x1a0, 0x20, true, 0x48894180ed55c5ff)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_blend_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.Blend", blend, 0x1c0, 0x20, true, 0x262916fd30ada26e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgk_multiplane_overlay_video_frame_format_t ), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.VideoFrameFormat", video_frame_format, 0x1e0, 0x20, true, 0xd6c9d3ba4eac4e3b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::color_space_type_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.ColorSpaceType", color_space_type, 0x200, 0x20, true, 0x6b364f2266ef1122)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::multiplane_overlay_stereo_format_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.StereoFormat", stereo_format, 0x220, 0x20, true, 0xa9784d0917cec5ec)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.StereoLeftViewFrame0", stereo_left_view_frame0, 0x240, 0x20, true, 0x62f3ebe5967d03e8)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.StereoBaseViewFrame0", stereo_base_view_frame0, 0x260, 0x20, true, 0xc9732a0ac210c773)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::multiplane_overlay_stereo_flip_mode_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.StereoFlipMode", stereo_flip_mode, 0x280, 0x20, true, 0xbbb6fa2e0921716b)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::multiplane_overlay_stretch_quality_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2.StretchQuality", stretch_quality, 0x2a0, 0x20, true, 0x46c7ef2e44adb878)
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
#endif