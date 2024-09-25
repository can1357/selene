#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_PARTITION_INFO_EXTENSION_V2.EventVersion", event_version, 0x0, 0x10, true, 0xbd130e22a6813e8b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_PARTITION_INFO_EXTENSION_V2.PartitionType", partition_type, 0x20, 0x20, true, 0xd83b6c541810e738)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_PARTITION_INFO_EXTENSION_V2.QpcOffsetFromRoot", qpc_offset_from_root, 0x40, 0x40, true, 0xf956abaca2bc965b)
#else
#define _m00
#define _m01
#define _m02
#endif