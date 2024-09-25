#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_GROW_PARTITION.PartitionNumber", partition_number, 0x0, 0x20, true, 0x28843b2af96e5505)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DISK_GROW_PARTITION.BytesToGrow", bytes_to_grow, 0x40, 0x40, true, 0xf5a7a9a04ae5b5ac)
#else
#define _m00
#define _m01
#endif