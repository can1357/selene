#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_VIRTUAL_CHANNEL_CAPABILITIES2.VCArbitrationCapability", vc_arbitration_capability, 0x0, 0x8, true, 0x791bc78b2c82d560, 8, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_VIRTUAL_CHANNEL_CAPABILITIES2.RsvdP", rsvd_p, 0x8, 0x10, true, 0x4c8a8e2ece2e39d6, 16, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_VIRTUAL_CHANNEL_CAPABILITIES2.VCArbitrationTableOffset", vc_arbitration_table_offset, 0x18, 0x8, true, 0x810264b4bcedc79b, 8, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIRTUAL_CHANNEL_CAPABILITIES2.AsULONG", as_ulong, 0x0, 0x20, true, 0x81696d7549e7ec4c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif