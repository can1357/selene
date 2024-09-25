#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_SEGMENT_BUS_NUMBER.bits.BusNumber", bus_number, 0x0, 0x0, false, 0xc77f6ea4de246d50, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PCI_SEGMENT_BUS_NUMBER.bits.SegmentNumber", segment_number, 0x0, 0x0, false, 0x5a37e0f62614f4bc, 16, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bits_t), "_PCI_SEGMENT_BUS_NUMBER.bits", bits, 0x0, 0x0, false, 0xbd675a0221f20b76)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_SEGMENT_BUS_NUMBER.AsULONG", as_ulong, 0x0, 0x0, false, 0x654a9d3d78890565)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif