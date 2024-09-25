#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_GDIARG_TRANSPARENTBLT.SrcRect", src_rect, 0x0, 0x80, true, 0x5040c2e7c93cc5b1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_GDIARG_TRANSPARENTBLT.DstRect", dst_rect, 0x80, 0x80, true, 0xbf62c5473e84424b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_TRANSPARENTBLT.SrcAllocationIndex", src_allocation_index, 0x100, 0x20, true, 0xd6d33d6ffd8baf56)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_TRANSPARENTBLT.DstAllocationIndex", dst_allocation_index, 0x120, 0x20, true, 0x3ecad9b4e5a1ec41)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_TRANSPARENTBLT.Color", color, 0x140, 0x20, true, 0x5d169d0fdf452faa)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_TRANSPARENTBLT.NumSubRects", num_sub_rects, 0x160, 0x20, true, 0x2cc08c9b62248079)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t*), "_DXGK_GDIARG_TRANSPARENTBLT.pSubRects", p_sub_rects, 0x180, 0x40, true, 0x4cdf15fbe38a75a8)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dkm_transparentbltflags_t), "_DXGK_GDIARG_TRANSPARENTBLT.Flags", flags, 0x1c0, 0x20, true, 0x2caf64e4e3494c32)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_TRANSPARENTBLT.SrcPitch", src_pitch, 0x1e0, 0x20, true, 0x978c57b67dc96473)
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
#endif