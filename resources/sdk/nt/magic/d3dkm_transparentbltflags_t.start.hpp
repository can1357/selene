#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKM_TRANSPARENTBLTFLAGS.HonorAlpha", honor_alpha, 0x0, 0x1, true, 0x1a4abf0faefde35e, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKM_TRANSPARENTBLTFLAGS.Value", value, 0x0, 0x20, true, 0xcc75ae3403ff2346)
#else
#define _m00
#define _m01
#endif