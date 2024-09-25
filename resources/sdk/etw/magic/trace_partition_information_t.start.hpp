#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETW_TRACE_PARTITION_INFORMATION.PartitionId", partition_id, 0x0, 0x80, true, 0x4744728f1aaadad4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETW_TRACE_PARTITION_INFORMATION.ParentId", parent_id, 0x80, 0x80, true, 0xf91b20e780142527)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_TRACE_PARTITION_INFORMATION.QpcOffsetFromRoot", qpc_offset_from_root, 0x100, 0x40, true, 0x87fa7babe26f75cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TRACE_PARTITION_INFORMATION.PartitionType", partition_type, 0x140, 0x20, true, 0xecb3c1e8653a4c6b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif