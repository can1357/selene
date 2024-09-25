#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.Type", type, 0x0, 0x10, true, 0x133c146a7a17eb34)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.Enabled", enabled, 0x10, 0x8, true, 0xf387209c3683ef17)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.SourceGuid", source_guid, 0x20, 0x80, true, 0xc5143d8403ff1f80)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.LogTag", log_tag, 0xa0, 0x10, true, 0xbc139037d9235c5b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.PacketLength", packet_length, 0xc0, 0x20, true, 0xd7d6c36628d1ad73)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.PacketCount", packet_count, 0xe0, 0x20, true, 0x78d581c35210cff4)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.PacketBuffer", packet_buffer, 0x100, 0x40, true, 0x628b6abd29b3430c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::error_source_configuration_dd_t), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.Config", config, 0x140, 0xc0, true, 0x9959a4816d4ec889)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.CreatorId", creator_id, 0x200, 0x80, true, 0x2668d957a98c2098)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.PartitionId", partition_id, 0x280, 0x80, true, 0xd0488f6f97c2d8a7)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.MaxSectionDataLength", max_section_data_length, 0x300, 0x20, true, 0xfde216c02424aa)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.MaxSectionsPerRecord", max_sections_per_record, 0x320, 0x20, true, 0x40ad8f134853eed3)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.PacketStateBuffer", packet_state_buffer, 0x340, 0x40, true, 0xd6e08882e3ff321c)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_WHEA_DEVICE_DRIVER_DESCRIPTOR.OpenHandles", open_handles, 0x380, 0x20, true, 0xdedfee2682f7bf0c)
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