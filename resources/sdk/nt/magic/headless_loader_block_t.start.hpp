#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEADLESS_LOADER_BLOCK.UsedBiosSettings", used_bios_settings, 0x0, 0x8, true, 0x7290f09f9bd29363)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEADLESS_LOADER_BLOCK.DataBits", data_bits, 0x8, 0x8, true, 0x3d0666a807b250ba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEADLESS_LOADER_BLOCK.StopBits", stop_bits, 0x10, 0x8, true, 0x1445e852705aff08)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEADLESS_LOADER_BLOCK.Parity", parity, 0x18, 0x8, true, 0x5f5749a6d28b104d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEADLESS_LOADER_BLOCK.BaudRate", baud_rate, 0x20, 0x20, true, 0xcdd33a786140f36d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEADLESS_LOADER_BLOCK.PortNumber", port_number, 0x40, 0x20, true, 0x183011359bbfca64)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_HEADLESS_LOADER_BLOCK.PortAddress", port_address, 0x80, 0x40, true, 0xe7d0e870868e07be)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEADLESS_LOADER_BLOCK.PciDeviceId", pci_device_id, 0xc0, 0x10, true, 0x7fc9598acd2d989a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEADLESS_LOADER_BLOCK.PciVendorId", pci_vendor_id, 0xd0, 0x10, true, 0xc14e7ac023fdd126)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEADLESS_LOADER_BLOCK.PciBusNumber", pci_bus_number, 0xe0, 0x8, true, 0x216b4b614f4ee538)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEADLESS_LOADER_BLOCK.PciBusSegment", pci_bus_segment, 0xf0, 0x10, true, 0x889b1246479b4f72)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEADLESS_LOADER_BLOCK.PciSlotNumber", pci_slot_number, 0x100, 0x8, true, 0x532d2c80cf302c6d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEADLESS_LOADER_BLOCK.PciFunctionNumber", pci_function_number, 0x108, 0x8, true, 0x5e1f1d80e5f2b71b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEADLESS_LOADER_BLOCK.PciFlags", pci_flags, 0x120, 0x20, true, 0xec2c96ece06d5dd)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_HEADLESS_LOADER_BLOCK.SystemGUID", system_guid, 0x140, 0x80, true, 0xb8ccb4c83b6a16e1)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEADLESS_LOADER_BLOCK.IsMMIODevice", is_mmio_device, 0x1c0, 0x8, true, 0x3c8c797964b34b91)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEADLESS_LOADER_BLOCK.TerminalType", terminal_type, 0x1c8, 0x8, true, 0x1e877be3d80baf38)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEADLESS_LOADER_BLOCK.InterfaceType", interface_type, 0x1d0, 0x8, true, 0x886582f0174351a1)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEADLESS_LOADER_BLOCK.RegisterBitWidth", register_bit_width, 0x1d8, 0x8, true, 0xb71a74dd50248b0f)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEADLESS_LOADER_BLOCK.RegisterAccessSize", register_access_size, 0x1e0, 0x8, true, 0x55f034a31b9aee24)
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
#endif