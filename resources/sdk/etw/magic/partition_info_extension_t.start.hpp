#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_PARTITION_INFO_EXTENSION.EventVersion", event_version, 0x0, 0x10, true, 0xe11ebbe3ca23ffe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_PARTITION_INFO_EXTENSION.PartitionType", partition_type, 0x20, 0x20, true, 0xac32fb7cf1f870b0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_PARTITION_INFO_EXTENSION.QpcOffsetFromRoot", qpc_offset_from_root, 0x40, 0x40, true, 0x1bd0502481f204f5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETW_PARTITION_INFO_EXTENSION.PartitionId", partition_id, 0x80, 0x80, true, 0x5601bb0201221ef5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETW_PARTITION_INFO_EXTENSION.ParentId", parent_id, 0x100, 0x80, true, 0xda140bff5bc4757)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif