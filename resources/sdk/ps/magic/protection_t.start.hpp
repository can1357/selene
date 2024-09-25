#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PS_PROTECTION.Level", level, 0x0, 0x8, true, 0xd32777f2cc2abdf3)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PS_PROTECTION.Type", type, 0x0, 0x3, true, 0x4c06d92dd3461eb7, 3, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_PROTECTION.Audit", audit, 0x3, 0x1, true, 0x2d7e3dce4306789f, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PS_PROTECTION.Signer", signer, 0x4, 0x4, true, 0x5fc74a8b632a31f8, 4, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif