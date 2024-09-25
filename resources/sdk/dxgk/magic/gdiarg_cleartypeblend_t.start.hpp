#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_GDIARG_CLEARTYPEBLEND.DstRect", dst_rect, 0x0, 0x80, true, 0xd1e597b7f40079e8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_CLEARTYPEBLEND.TmpSurfAllocationIndex", tmp_surf_allocation_index, 0x80, 0x20, true, 0x199cf23ed1a79a29)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_CLEARTYPEBLEND.GammaSurfAllocationIndex", gamma_surf_allocation_index, 0xa0, 0x20, true, 0x98276cb496b183f9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_CLEARTYPEBLEND.AlphaSurfAllocationIndex", alpha_surf_allocation_index, 0xc0, 0x20, true, 0x2714ed40b223dffe)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_CLEARTYPEBLEND.DstAllocationIndex", dst_allocation_index, 0xe0, 0x20, true, 0xf5a2496c9cf715b7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGK_GDIARG_CLEARTYPEBLEND.DstToAlphaOffsetX", dst_to_alpha_offset_x, 0x100, 0x20, true, 0x116b1530ceb5daf2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGK_GDIARG_CLEARTYPEBLEND.DstToAlphaOffsetY", dst_to_alpha_offset_y, 0x120, 0x20, true, 0x662d2f051f716226)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_CLEARTYPEBLEND.Color", color, 0x140, 0x20, true, 0xa2c42a419a8d1f5e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_CLEARTYPEBLEND.Gamma", gamma, 0x160, 0x20, true, 0xde31fe2e3fa4fd4b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_CLEARTYPEBLEND.NumSubRects", num_sub_rects, 0x180, 0x20, true, 0xbaa000f02ee0f586)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t*), "_DXGK_GDIARG_CLEARTYPEBLEND.pSubRects", p_sub_rects, 0x1c0, 0x40, true, 0x62ade96de1a5d25e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_CLEARTYPEBLEND.AlphaSurfPitch", alpha_surf_pitch, 0x200, 0x20, true, 0xda3b51a622187512)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GDIARG_CLEARTYPEBLEND.Color2", color2, 0x220, 0x20, true, 0x20d9af04daf45fd)
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