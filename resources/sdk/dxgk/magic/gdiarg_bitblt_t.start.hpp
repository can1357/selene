#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_GDIARG_BITBLT.SrcRect", src_rect, 0x0, 0x80, true, 0xde106ed827b3519c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_GDIARG_BITBLT.DstRect", dst_rect, 0x80, 0x80, true, 0x3cd3f3f3ce5189f7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_BITBLT.SrcAllocationIndex", src_allocation_index, 0x100, 0x20, true, 0x4d80549c87426587)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_BITBLT.DstAllocationIndex", dst_allocation_index, 0x120, 0x20, true, 0x37d0323f2385ada8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_BITBLT.NumSubRects", num_sub_rects, 0x140, 0x20, true, 0xdea33da6e2bfccc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t*), "_DXGK_GDIARG_BITBLT.pSubRects", p_sub_rects, 0x180, 0x40, true, 0xf020c94d8ae3d337)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_GDIARG_BITBLT.Rop", rop, 0x1c0, 0x10, true, 0xa65d2b1e2c61760c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_GDIARG_BITBLT.Rop3", rop3, 0x1d0, 0x10, true, 0x47c5196f1f45a46d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_BITBLT.SrcPitch", src_pitch, 0x1e0, 0x20, true, 0x87ae522a88a07b16)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_BITBLT.DstPitch", dst_pitch, 0x200, 0x20, true, 0xf18d05a2318d60da)
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
#endif