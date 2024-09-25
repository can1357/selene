#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_PCI_HEADER_TYPE_1.BaseAddresses", base_addresses, 0x0, 0x40, true, 0x657258798c2e7d88)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_1.PrimaryBus", primary_bus, 0x40, 0x8, true, 0xaf07e8071257e1c1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_1.SecondaryBus", secondary_bus, 0x48, 0x8, true, 0x9650c27c4707bb12)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_1.SubordinateBus", subordinate_bus, 0x50, 0x8, true, 0x75c0290fddcc17cc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_1.SecondaryLatency", secondary_latency, 0x58, 0x8, true, 0x9361401bb8737484)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_1.IOBase", io_base, 0x60, 0x8, true, 0x2c7800f73b624210)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_1.IOLimit", io_limit, 0x68, 0x8, true, 0xed9ea9f4f29fb880)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_HEADER_TYPE_1.SecondaryStatus", secondary_status, 0x70, 0x10, true, 0x76747ee783782a81)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_HEADER_TYPE_1.MemoryBase", memory_base, 0x80, 0x10, true, 0x93e7fcbc528ad793)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_HEADER_TYPE_1.MemoryLimit", memory_limit, 0x90, 0x10, true, 0x723c759ddebc21a3)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_HEADER_TYPE_1.PrefetchBase", prefetch_base, 0xa0, 0x10, true, 0x836fdfa08a2da2c7)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_HEADER_TYPE_1.PrefetchLimit", prefetch_limit, 0xb0, 0x10, true, 0x3afd16b00511fd0)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HEADER_TYPE_1.PrefetchBaseUpper32", prefetch_base_upper32, 0xc0, 0x20, true, 0x675c6548003d1dbb)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HEADER_TYPE_1.PrefetchLimitUpper32", prefetch_limit_upper32, 0xe0, 0x20, true, 0x64826a9ed5638bfb)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_HEADER_TYPE_1.IOBaseUpper16", io_base_upper16, 0x100, 0x10, true, 0x106a12fc2b8acc59)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_HEADER_TYPE_1.IOLimitUpper16", io_limit_upper16, 0x110, 0x10, true, 0x60a59759f01aecff)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_1.CapabilitiesPtr", capabilities_ptr, 0x120, 0x8, true, 0xb7aa80faa27e92a1)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HEADER_TYPE_1.ROMBaseAddress", rom_base_address, 0x140, 0x20, true, 0x784dd2a81545828d)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_1.InterruptLine", interrupt_line, 0x160, 0x8, true, 0x4b2a44eb5fe4ab4b)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_1.InterruptPin", interrupt_pin, 0x168, 0x8, true, 0xd3338092aa21f7f2)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_HEADER_TYPE_1.BridgeControl", bridge_control, 0x170, 0x10, true, 0xbe6b20c4dda0039f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#endif