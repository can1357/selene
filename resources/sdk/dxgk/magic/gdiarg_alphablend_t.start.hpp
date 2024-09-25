#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_GDIARG_ALPHABLEND.SrcRect", src_rect, 0x0, 0x80, true, 0x56d6ab9f909274ac)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_GDIARG_ALPHABLEND.DstRect", dst_rect, 0x80, 0x80, true, 0x361ec1eb1de8b95f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_ALPHABLEND.SrcAllocationIndex", src_allocation_index, 0x100, 0x20, true, 0x39fc787449814695)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_ALPHABLEND.DstAllocationIndex", dst_allocation_index, 0x120, 0x20, true, 0x3825d1e62334744d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_ALPHABLEND.NumSubRects", num_sub_rects, 0x140, 0x20, true, 0xf682ba47e7ac0b91)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t*), "_DXGK_GDIARG_ALPHABLEND.pSubRects", p_sub_rects, 0x180, 0x40, true, 0x3601e86d1e5367b4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_GDIARG_ALPHABLEND.SourceConstantAlpha", source_constant_alpha, 0x1c0, 0x8, true, 0x596e882e0592744a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_GDIARG_ALPHABLEND.SourceHasAlpha", source_has_alpha, 0x1c8, 0x8, true, 0xd1d0fa0ddaa6d09b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_ALPHABLEND.SrcPitch", src_pitch, 0x1e0, 0x20, true, 0xaa413e50f8324fd7)
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