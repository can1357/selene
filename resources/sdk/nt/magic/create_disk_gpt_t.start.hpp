#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CREATE_DISK_GPT.DiskId", disk_id, 0x0, 0x80, true, 0x64caeea7fbc599a2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CREATE_DISK_GPT.MaxPartitionCount", max_partition_count, 0x80, 0x20, true, 0x17928454229c31f5)
#else
#define _m00
#define _m01
#endif