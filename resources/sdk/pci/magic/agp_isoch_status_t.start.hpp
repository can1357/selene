#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_AGP_ISOCH_STATUS.ErrorCode", error_code, 0x0, 0x2, true, 0x15ff9820a05141de, 2, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_AGP_ISOCH_STATUS.Rsvd1", rsvd1, 0x2, 0x1, true, 0x54738e799b6d4762, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_AGP_ISOCH_STATUS.Isoch_L", isoch_l, 0x3, 0x3, true, 0xd726bbd8e3d2b3f9, 3, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_AGP_ISOCH_STATUS.Isoch_Y", isoch_y, 0x6, 0x2, true, 0x9843a78c9a9a4ff4, 2, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_AGP_ISOCH_STATUS.Isoch_N", isoch_n, 0x8, 0x8, true, 0x57ebc96a38787d8d, 8, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PCI_AGP_ISOCH_STATUS.Rsvd2", rsvd2, 0x10, 0x10, true, 0xce30e0fef3ac2b6f, 16, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif