#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_ETW_TRACE_PARTITION_INFORMATION_V2.QpcOffsetFromRoot", qpc_offset_from_root, 0x0, 0x40, true, 0xc988a2f6666314d6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_TRACE_PARTITION_INFORMATION_V2.PartitionType", partition_type, 0x40, 0x20, true, 0x93445c4082717d9d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ETW_TRACE_PARTITION_INFORMATION_V2.PartitionId", partition_id, 0x80, 0x40, true, 0x329729230f3e15ea)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ETW_TRACE_PARTITION_INFORMATION_V2.ParentId", parent_id, 0xc0, 0x40, true, 0x58c36b7f95a69237)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif