#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_WHEA_PCI_SLOT_NUMBER.bits.DeviceNumber", device_number, 0x0, 0x5, true, 0xec6a21e3dc49aaca, 5, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WHEA_PCI_SLOT_NUMBER.bits.FunctionNumber", function_number, 0x5, 0x3, true, 0xbce0dac47b23ddce, 3, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_bits_t), "_WHEA_PCI_SLOT_NUMBER.bits", bits, 0x0, 0x20, true, 0xad3a4bdf39740e04)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PCI_SLOT_NUMBER.AsULONG", as_ulong, 0x0, 0x20, true, 0xdad8cdb180ebeda3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif