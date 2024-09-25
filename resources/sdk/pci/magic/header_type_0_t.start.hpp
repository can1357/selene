#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "_PCI_HEADER_TYPE_0.BaseAddresses", base_addresses, 0x0, 0xc0, true, 0x3da8171490f5c337)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HEADER_TYPE_0.CIS", cis, 0xc0, 0x20, true, 0xeb7a8335d7dae27d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_HEADER_TYPE_0.SubVendorID", sub_vendor_id, 0xe0, 0x10, true, 0xf4c2d84ae36f6dfc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_HEADER_TYPE_0.SubSystemID", sub_system_id, 0xf0, 0x10, true, 0x434e0d69a42ea330)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_HEADER_TYPE_0.ROMBaseAddress", rom_base_address, 0x100, 0x20, true, 0x232194973dfb6fb1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_0.CapabilitiesPtr", capabilities_ptr, 0x120, 0x8, true, 0xe62eb09f291d1f53)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_0.InterruptLine", interrupt_line, 0x160, 0x8, true, 0x2e4f0ef5c1c82aae)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_0.InterruptPin", interrupt_pin, 0x168, 0x8, true, 0xcd031e2b54549d21)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_0.MinimumGrant", minimum_grant, 0x170, 0x8, true, 0xc4483b7922a9b76b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_HEADER_TYPE_0.MaximumLatency", maximum_latency, 0x178, 0x8, true, 0xd98bc16d86efb329)
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
#endif