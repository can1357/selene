#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TLSPRITESTATE.bInsideDriverCall", b_inside_driver_call, 0x0, 0x8, true, 0xb1a6e3dd2f387dc5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TLSPRITESTATE.flOriginalSurfFlags", fl_original_surf_flags, 0x20, 0x20, true, 0x2850a02d476a69)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TLSPRITESTATE.iOriginalType", i_original_type, 0x40, 0x20, true, 0xfdbf00f3b932d42c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TLSPRITESTATE.flSpriteSurfFlags", fl_sprite_surf_flags, 0x60, 0x20, true, 0x25012f3749ed958)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TLSPRITESTATE.iSpriteType", i_sprite_type, 0x80, 0x20, true, 0x11792e1d781bb943)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TLSPRITESTATE.flags", flags, 0xa0, 0x20, true, 0xc7a5e8c9055e0745)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TLSPRITESTATE.iType", i_type, 0xc0, 0x20, true, 0xad018f4c8852dbf9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pState", p_state, 0x100, 0x40, true, 0x20f95b1714f6b0d6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnStrokeAndFillPath", pfn_stroke_and_fill_path, 0x140, 0x40, true, 0xce66e186708209be)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnStrokePath", pfn_stroke_path, 0x180, 0x40, true, 0x796d3bc6071f650a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnFillPath", pfn_fill_path, 0x1c0, 0x40, true, 0xa307322b4053567a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnPaint", pfn_paint, 0x200, 0x40, true, 0xc0e91114f2d94178)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnBitBlt", pfn_bit_blt, 0x240, 0x40, true, 0xd6ba29c4a0ab1426)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnCopyBits", pfn_copy_bits, 0x280, 0x40, true, 0x74c62dfa37ce35c0)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnStretchBlt", pfn_stretch_blt, 0x2c0, 0x40, true, 0xe72c8b0b942be539)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnTextOut", pfn_text_out, 0x300, 0x40, true, 0xde1eb752c1e1b5ea)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnLineTo", pfn_line_to, 0x340, 0x40, true, 0xa12f861f6c85d8dd)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnTransparentBlt", pfn_transparent_blt, 0x380, 0x40, true, 0x4d8b276835d36dbb)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnAlphaBlend", pfn_alpha_blend, 0x3c0, 0x40, true, 0x1622cfd0e77486ab)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnPlgBlt", pfn_plg_blt, 0x400, 0x40, true, 0xbfa866a5733d44bb)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnGradientFill", pfn_gradient_fill, 0x440, 0x40, true, 0x87763136388d5293)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnSaveScreenBits", pfn_save_screen_bits, 0x480, 0x40, true, 0x13959950ef4586e)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnStretchBltROP", pfn_stretch_blt_rop, 0x4c0, 0x40, true, 0x1ebcc48462a29f8b)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TLSPRITESTATE.pfnDrawStream", pfn_draw_stream, 0x500, 0x40, true, 0xbff14a3354a40169)
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
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#endif