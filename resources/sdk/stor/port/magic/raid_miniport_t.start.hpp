#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_adapter_extension_t*), "_RAID_MINIPORT.Adapter", adapter, 0x0, 0x40, true, 0xe20de55a6e6b5862)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::port_configuration_information_t), "_RAID_MINIPORT.PortConfiguration", port_configuration, 0x40, 0x0, true, 0x55691bbe4721814a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::hw_initialization_data_t*), "_RAID_MINIPORT.HwInitializationData", hw_initialization_data, 0x740, 0x40, true, 0x11ec35dac5860f7f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_hw_device_ext_t*), "_RAID_MINIPORT.PrivateDeviceExt", private_device_ext, 0x780, 0x40, true, 0xe01f41b8b725b8e5)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_MINIPORT.Flags.InFindAdapter", in_find_adapter, 0x0, 0x1, true, 0x7e3fed3c45de489d, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_MINIPORT.Flags.InResetBus", in_reset_bus, 0x1, 0x1, true, 0xf1836ea3eab6f882, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_MINIPORT.Flags.IsVirtual", is_virtual, 0x2, 0x1, true, 0xbeb9d65ed51c91eb, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_MINIPORT.Flags.UnitControlListPopulated", unit_control_list_populated, 0x3, 0x1, true, 0xbcb04590688b9f71, 1, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_MINIPORT.Flags.AdapterControlListPopulated", adapter_control_list_populated, 0x4, 0x1, true, 0x84ecb8c83424e8c1, 1, uint8_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_RAID_MINIPORT.Flags", flags, 0x7c0, 0x8, true, 0xb69b5040fe0733ca)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::unit_control_list_t), "_RAID_MINIPORT.UnitControlList", unit_control_list, 0x7e0, 0xa0, true, 0xfc38ec9e1893539c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::adapter_control_list_t), "_RAID_MINIPORT.AdapterControlList", adapter_control_list, 0x880, 0xc0, true, 0x749900e38c523f4a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_MINIPORT.FeatureCount", feature_count, 0x940, 0x20, true, 0x571fc82a876e4bbb)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_RAID_MINIPORT.FeatureList", feature_list, 0x960, 0x8, true, 0xe257e71d335f81df)
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
#endif