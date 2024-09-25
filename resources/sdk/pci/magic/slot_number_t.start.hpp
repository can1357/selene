#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_SLOT_NUMBER.bits.DeviceNumber", device_number, 0x0, 0x5, true, 0xba5591a515e9838c, 5, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_SLOT_NUMBER.bits.FunctionNumber", function_number, 0x5, 0x3, true, 0x91745c1f075b4142, 3, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_bits_t), "_PCI_SLOT_NUMBER.bits", bits, 0x0, 0x20, true, 0xf7fbda405dfd6073)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_SLOT_NUMBER.AsULONG", as_ulong, 0x0, 0x20, true, 0xbb85c7cbeb26a263)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif