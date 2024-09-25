#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_TPH_ST_TABLE_ENTRY.LowerEntry", lower_entry, 0x0, 0x8, true, 0x84c6b22ffaeaf2b3, 8, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_TPH_ST_TABLE_ENTRY.UpperEntry", upper_entry, 0x8, 0x8, true, 0xe7a68b54ae12f20f, 8, uint16_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_TPH_ST_TABLE_ENTRY.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xeed38ade3789c382)
#else
#define _m00
#define _m01
#define _m02
#endif