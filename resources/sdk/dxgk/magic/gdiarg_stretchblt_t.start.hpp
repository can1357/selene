#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_GDIARG_STRETCHBLT.SrcRect", src_rect, 0x0, 0x80, true, 0xb6fe0515b27c4679)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_GDIARG_STRETCHBLT.DstRect", dst_rect, 0x80, 0x80, true, 0x864ce974e97550ad)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_STRETCHBLT.DstAllocationIndex", dst_allocation_index, 0x100, 0x20, true, 0x6f3f6bb988e89e6f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_STRETCHBLT.SrcAllocationIndex", src_allocation_index, 0x120, 0x20, true, 0x4464584319333523)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_STRETCHBLT.NumSubRects", num_sub_rects, 0x140, 0x20, true, 0x601541838c17a72c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t*), "_DXGK_GDIARG_STRETCHBLT.pSubRects", p_sub_rects, 0x180, 0x40, true, 0x5cbba25b437257a8)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_DXGK_GDIARG_STRETCHBLT.Mode", mode, 0x1c0, 0x10, true, 0x2583f34d9d2ea8a1, 16, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GDIARG_STRETCHBLT.MirrorX", mirror_x, 0x1d0, 0x1, true, 0xfe611a368a3863be, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GDIARG_STRETCHBLT.MirrorY", mirror_y, 0x1d1, 0x1, true, 0x89b27ceab296fd34, 1, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_STRETCHBLT.Flags", flags, 0x1c0, 0x20, true, 0x3d19aa0a8d62b178)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_STRETCHBLT.SrcPitch", src_pitch, 0x1e0, 0x20, true, 0x2d2e45ebc7bd09b8)
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