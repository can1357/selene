#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_DL_OUI.Byte", byte, 0x0, 0x18, true, 0x4de865d5226f4208)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DL_OUI.Group", group, 0x0, 0x1, true, 0xf63e3d1e3c43b457, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DL_OUI.Local", local, 0x1, 0x1, true, 0xd06cc20d814ab8cd, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif