#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUG_DEVICE_DESCRIPTOR.Bus", bus, 0x0, 0x20, true, 0xd4d0122969dc221f)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUG_DEVICE_DESCRIPTOR.Slot", slot, 0x20, 0x20, true, 0x2186ca279b74d982)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEBUG_DEVICE_DESCRIPTOR.Segment", segment, 0x40, 0x10, true, 0x1a4a29688c1c1aa5)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEBUG_DEVICE_DESCRIPTOR.VendorID", vendor_id, 0x50, 0x10, true, 0xa9685954b378cb82)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEBUG_DEVICE_DESCRIPTOR.DeviceID", device_id, 0x60, 0x10, true, 0xaa69bb85d2b50a69)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEBUG_DEVICE_DESCRIPTOR.BaseClass", base_class, 0x70, 0x8, true, 0x77b1a05f94efd7a8)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEBUG_DEVICE_DESCRIPTOR.SubClass", sub_class, 0x78, 0x8, true, 0xbc419391d91a26ab)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEBUG_DEVICE_DESCRIPTOR.ProgIf", prog_if, 0x80, 0x8, true, 0x13acd1bb991c643f)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEBUG_DEVICE_DESCRIPTOR.Flags", flags, 0x88, 0x8, true, 0x1bcfcd116c7b9e2)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEBUG_DEVICE_DESCRIPTOR.DbgHalScratchAllocated", dbg_hal_scratch_allocated, 0x88, 0x1, true, 0xb90546fd426eab26, 1, uint8_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEBUG_DEVICE_DESCRIPTOR.DbgBarsMapped", dbg_bars_mapped, 0x89, 0x1, true, 0xedc0d5e9978b0ee5, 1, uint8_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEBUG_DEVICE_DESCRIPTOR.DbgScratchAllocated", dbg_scratch_allocated, 0x8a, 0x1, true, 0x5eec6c1b32da1953, 1, uint8_t)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEBUG_DEVICE_DESCRIPTOR.Initialized", initialized, 0x90, 0x8, true, 0x874f7cbda14a6290)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEBUG_DEVICE_DESCRIPTOR.Configured", configured, 0x98, 0x8, true, 0x139ab4cbe37d3511)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::debug_device_address_t, 6>), "_DEBUG_DEVICE_DESCRIPTOR.BaseAddress", base_address, 0xc0, 0x80, true, 0xe99a8a2c0297c35d)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::debug_memory_requirements_t), "_DEBUG_DEVICE_DESCRIPTOR.Memory", memory, 0x540, 0x0, true, 0xb4858da8a6f1871c)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEBUG_DEVICE_DESCRIPTOR.PortType", port_type, 0x660, 0x10, true, 0x2bcd4ffa012850fe)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEBUG_DEVICE_DESCRIPTOR.PortSubtype", port_subtype, 0x670, 0x10, true, 0xf1757b29a702bc03)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DEBUG_DEVICE_DESCRIPTOR.OemData", oem_data, 0x680, 0x40, true, 0x6f303a3f84340617)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUG_DEVICE_DESCRIPTOR.OemDataLength", oem_data_length, 0x6c0, 0x20, true, 0xcb52b768a079bbc3)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_DEBUG_DEVICE_DESCRIPTOR.NameSpace", name_space, 0x6e0, 0x20, true, 0xc9e5b6e911c724c7, 32, uint32_t)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_DEBUG_DEVICE_DESCRIPTOR.NameSpacePath", name_space_path, 0x700, 0x40, true, 0xa3b5325cef1c48)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUG_DEVICE_DESCRIPTOR.NameSpacePathLength", name_space_path_length, 0x740, 0x20, true, 0xd6621484fe4c0878)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUG_DEVICE_DESCRIPTOR.TransportType", transport_type, 0x760, 0x20, true, 0xd3d345df0b1b2457)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::debug_transport_data_t), "_DEBUG_DEVICE_DESCRIPTOR.TransportData", transport_data, 0x780, 0x40, true, 0x72c8fae98fc13585)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUG_DEVICE_DESCRIPTOR.Dbg2TableIndex", dbg2_table_index, 0x640, 0x20, true, 0xade4a20d4acfc738)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEBUG_DEVICE_DESCRIPTOR.DbgUncachedMemory", dbg_uncached_memory, 0x0, 0x0, false, 0xe3f02d135bb8ca2e, 1, uint8_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DEBUG_DEVICE_DESCRIPTOR.DbgSynthetic", dbg_synthetic, 0x0, 0x0, false, 0x24344d7f8eb2ad1e, 1, uint8_t)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::debug_iommu_efi_data_t), "_DEBUG_DEVICE_DESCRIPTOR.EfiIoMmuData", efi_io_mmu_data, 0x0, 0x0, false, 0xc035955fef635093)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#endif