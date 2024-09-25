#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANEOVERLAYCAPS.Rotation", rotation, 0x0, 0x1, true, 0x81ff36bd6e4d7bab, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANEOVERLAYCAPS.RotationWithoutIndependentFlip", rotation_without_independent_flip, 0x1, 0x1, true, 0x17931519692ecb8a, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANEOVERLAYCAPS.VerticalFlip", vertical_flip, 0x2, 0x1, true, 0xab504e1164ae820f, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANEOVERLAYCAPS.HorizontalFlip", horizontal_flip, 0x3, 0x1, true, 0x89877f317f1715f5, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANEOVERLAYCAPS.StretchRGB", stretch_rgb, 0x4, 0x1, true, 0x91fa24845d689de2, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANEOVERLAYCAPS.StretchYUV", stretch_yuv, 0x5, 0x1, true, 0x4db9fa091bf9034, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANEOVERLAYCAPS.BilinearFilter", bilinear_filter, 0x6, 0x1, true, 0xe11349da90fc270b, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANEOVERLAYCAPS.HighFilter", high_filter, 0x7, 0x1, true, 0x8b482b61f4cb854, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANEOVERLAYCAPS.Shared", shared, 0x8, 0x1, true, 0x929fca3f5e02f8c1, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANEOVERLAYCAPS.Immediate", immediate, 0x9, 0x1, true, 0x93de36cdabb37668, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MULTIPLANEOVERLAYCAPS.Plane0ForVirtualModeOnly", plane0_for_virtual_mode_only, 0xa, 0x1, true, 0xbe56951386c3d8f7, 1, uint32_t)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANEOVERLAYCAPS.Value", value, 0x0, 0x20, true, 0x7b9f7960199d0156)
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
#endif