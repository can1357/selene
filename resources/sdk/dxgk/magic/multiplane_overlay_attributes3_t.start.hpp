#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_flags_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3.Flags", flags, 0x0, 0x20, true, 0xb01233b865e8c8a1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3.SrcRect", src_rect, 0x20, 0x80, true, 0xb0b7f927e25778c3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3.DstRect", dst_rect, 0xa0, 0x80, true, 0x6b72fd87cdd631df)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3.ClipRect", clip_rect, 0x120, 0x80, true, 0xb3047b8a97d28a8d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3.Rotation", rotation, 0x1a0, 0x20, true, 0x76a750ae8bcf0a17)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_blend_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3.Blend", blend, 0x1c0, 0x20, true, 0xb6e333266c6c69c6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::color_space_type_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3.ColorSpaceType", color_space_type, 0x1e0, 0x20, true, 0xad573a7340224015)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::multiplane_overlay_stretch_quality_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3.StretchQuality", stretch_quality, 0x200, 0x20, true, 0x3c9c15fcc3fc2da8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3.SDRWhiteLevel", sdr_white_level, 0x220, 0x20, true, 0x375a4d66595d29d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3.DirtyRectCnt", dirty_rect_cnt, 0x240, 0x20, true, 0xea7852ed4965fe1f)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct tag::rect_t*), "_DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3.pDirtyRects", p_dirty_rects, 0x280, 0x40, true, 0xca5b3d8167d34971)
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
#endif