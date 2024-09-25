#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.Blt", blt, 0x0, 0x1, true, 0xe9de36076e256b8, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.ColorFill", color_fill, 0x1, 0x1, true, 0x5d23ccf2ce9d6648, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.Flip", flip, 0x2, 0x1, true, 0x7ccc21258986560c, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.FlipWithNoWait", flip_with_no_wait, 0x3, 0x1, true, 0x2bb655ee023812c, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.SrcColorKey", src_color_key, 0x4, 0x1, true, 0x72515acf75cf965c, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.DstColorKey", dst_color_key, 0x5, 0x1, true, 0xe864c9b2288b26c9, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.LinearToSrgb", linear_to_srgb, 0x6, 0x1, true, 0x6190083116a1ed5d, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.Rotate", rotate, 0x7, 0x1, true, 0x230528f53a2de32c, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.FlipStereo", flip_stereo, 0x8, 0x1, true, 0x70f20e99e9915d75, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.FlipStereoTemporaryMono", flip_stereo_temporary_mono, 0x9, 0x1, true, 0x1ee14e3c632dd5bc, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.FlipStereoPreferRight", flip_stereo_prefer_right, 0xa, 0x1, true, 0x2e6877c69e26fe01, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.BltStereoUseRight", blt_stereo_use_right, 0xb, 0x1, true, 0xa5638198378d4d8d, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.FlipWithMultiPlaneOverlay", flip_with_multi_plane_overlay, 0xc, 0x1, true, 0x4a308af40bbef6ac, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_PRESENTFLAGS.RedirectedFlip", redirected_flip, 0xd, 0x1, true, 0xd5d02384df6fb8d, 1, uint32_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PRESENTFLAGS.Value", value, 0x0, 0x20, true, 0x96efc22f502b5b04)
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
#endif