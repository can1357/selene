#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3.Flags", flags, 0x0, 0x20, true, 0x9ff2deb66b8c6b81)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3.SrcRect", src_rect, 0x20, 0x80, true, 0x22eab49d05f07b0c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3.DstRect", dst_rect, 0xa0, 0x80, true, 0x6bf185dd5c5d68fb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3.ClipRect", clip_rect, 0x120, 0x80, true, 0x8cbde4e0aae616f7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3.Rotation", rotation, 0x1a0, 0x20, true, 0xf78b81d70913104e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::multiplane_overlay_blend_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3.Blend", blend, 0x1c0, 0x20, true, 0x41c50b91765e9cf7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3.DirtyRectCount", dirty_rect_count, 0x1e0, 0x20, true, 0x8cddac698e4b556)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t*), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3.pDirtyRects", p_dirty_rects, 0x200, 0x40, true, 0x4a82eaf5c291e783)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::color_space_type_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3.ColorSpace", color_space, 0x240, 0x20, true, 0xed7137e1c748c1c2)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkmt_multiplane_overlay_stretch_quality_t ), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3.StretchQuality", stretch_quality, 0x260, 0x20, true, 0xb925fd223fd2ed43)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3.SDRWhiteLevel", sdr_white_level, 0x280, 0x20, true, 0xd19049a55a73537b)
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