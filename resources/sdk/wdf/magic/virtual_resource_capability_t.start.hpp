#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_VIRTUAL_RESOURCE_CAPABILITY.PortArbitrationCapability", port_arbitration_capability, 0x0, 0x8, true, 0xb7a24000d4d9c9e4, 8, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_VIRTUAL_RESOURCE_CAPABILITY.RsvdP1", rsvd_p1, 0x8, 0x6, true, 0xc5c189b1e7b8e122, 6, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VIRTUAL_RESOURCE_CAPABILITY.Undefined", undefined, 0xe, 0x1, true, 0xe395f24718e3b46b, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VIRTUAL_RESOURCE_CAPABILITY.RejectSnoopTransactions", reject_snoop_transactions, 0xf, 0x1, true, 0x4e8fca9ae50e3b64, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_VIRTUAL_RESOURCE_CAPABILITY.MaximumTimeSlots", maximum_time_slots, 0x10, 0x7, true, 0x41b0017a2d1683c6, 7, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VIRTUAL_RESOURCE_CAPABILITY.RsvdP2", rsvd_p2, 0x17, 0x1, true, 0xa6056be57ebc9c62, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_VIRTUAL_RESOURCE_CAPABILITY.PortArbitrationTableOffset", port_arbitration_table_offset, 0x18, 0x8, true, 0x88cd756bad865bd4, 8, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIRTUAL_RESOURCE_CAPABILITY.AsULONG", as_ulong, 0x0, 0x20, true, 0xe6e44cb7904deab1)
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