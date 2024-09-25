#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_EISA_PORT_DESCRIPTOR.NumberPorts", number_ports, 0x0, 0x5, true, 0xeaf536ca974d827a, 5, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EISA_PORT_DESCRIPTOR.Shared", shared, 0x6, 0x1, true, 0x7fffd28246e35c58, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EISA_PORT_DESCRIPTOR.MoreEntries", more_entries, 0x7, 0x1, true, 0xf58057880d8f865d, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif