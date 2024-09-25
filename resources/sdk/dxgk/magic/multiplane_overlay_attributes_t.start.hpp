#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_flags_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.Flags", flags, 0x0, 0x20, true, 0x11093fe189d8ee72)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.SrcRect", src_rect, 0x20, 0x80, true, 0x89234899c36b6a0a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.DstRect", dst_rect, 0xa0, 0x80, true, 0xa52e13b465a9a582)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.ClipRect", clip_rect, 0x120, 0x80, true, 0x79f086aa69ed3a33)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.Rotation", rotation, 0x1a0, 0x20, true, 0xa4a30487d586507f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_blend_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.Blend", blend, 0x1c0, 0x20, true, 0xd981011fef474a47)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgk_multiplane_overlay_video_frame_format_t ), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.VideoFrameFormat", video_frame_format, 0x1e0, 0x20, true, 0x784ff43baccc65fd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_y_cb_cr_flags_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.YCbCrFlags", y_cb_cr_flags, 0x200, 0x20, true, 0x9d78d3bf93aa2b4a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::multiplane_overlay_stereo_format_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.StereoFormat", stereo_format, 0x220, 0x20, true, 0x4ebb56abdbbf3869)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.StereoLeftViewFrame0", stereo_left_view_frame0, 0x240, 0x20, true, 0x771f00b93f12f2e8)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.StereoBaseViewFrame0", stereo_base_view_frame0, 0x260, 0x20, true, 0xe893ac553fcb3161)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::multiplane_overlay_stereo_flip_mode_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.StereoFlipMode", stereo_flip_mode, 0x280, 0x20, true, 0x7bbc99067bcd77b8)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::multiplane_overlay_stretch_quality_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES.StretchQuality", stretch_quality, 0x2a0, 0x20, true, 0x1feee1e337666610)
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