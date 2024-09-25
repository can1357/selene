#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VIRTUAL_CHANNEL_CAPABILITIES1.ExtendedVCCount", extended_vc_count, 0x0, 0x3, true, 0xb7881d9fb7c54a10, 0, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VIRTUAL_CHANNEL_CAPABILITIES1.RsvdP1", rsvd_p1, 0x3, 0x1, true, 0x6bb6c4866aeda142, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VIRTUAL_CHANNEL_CAPABILITIES1.LowPriorityExtendedVCCount", low_priority_extended_vc_count, 0x4, 0x3, true, 0x6ae303a7afd546d2, 0, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VIRTUAL_CHANNEL_CAPABILITIES1.RsvdP2", rsvd_p2, 0x7, 0x1, true, 0xd324185b3a67973f, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_VIRTUAL_CHANNEL_CAPABILITIES1.ReferenceClock", reference_clock, 0x8, 0x2, true, 0xe10ce73e8ce024b5, 2, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_VIRTUAL_CHANNEL_CAPABILITIES1.PortArbitrationTableEntrySize", port_arbitration_table_entry_size, 0xa, 0x2, true, 0x18c2ddf12b976d10, 2, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint20_t), "_VIRTUAL_CHANNEL_CAPABILITIES1.RsvdP3", rsvd_p3, 0xc, 0x14, true, 0xfae5610c0963e719, 20, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIRTUAL_CHANNEL_CAPABILITIES1.AsULONG", as_ulong, 0x0, 0x20, true, 0xce3bbbebe7ffc3cf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif