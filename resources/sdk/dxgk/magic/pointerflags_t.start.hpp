#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_POINTERFLAGS.Monochrome", monochrome, 0x0, 0x1, true, 0xe6fa60c6919238e0, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_POINTERFLAGS.Color", color, 0x1, 0x1, true, 0x181bf43128c2e65e, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_POINTERFLAGS.MaskedColor", masked_color, 0x2, 0x1, true, 0xb4a0d4453a2c519d, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_POINTERFLAGS.Value", value, 0x0, 0x20, true, 0x90050c48dbbe05d9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif