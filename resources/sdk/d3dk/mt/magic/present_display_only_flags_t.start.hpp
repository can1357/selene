#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENT_DISPLAY_ONLY_FLAGS.Rotate", rotate, 0x0, 0x1, true, 0x8ef8908a3e05bcaa, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_DISPLAY_ONLY_FLAGS.Value", value, 0x0, 0x20, true, 0xb7b85545e7ce63be)
#else
#define _m00
#define _m01
#endif