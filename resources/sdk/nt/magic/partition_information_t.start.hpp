#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_PARTITION_INFORMATION.StartingOffset", starting_offset, 0x0, 0x40, true, 0x999c008b84b26326)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_PARTITION_INFORMATION.PartitionLength", partition_length, 0x40, 0x40, true, 0xea532baec01b2d47)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PARTITION_INFORMATION.HiddenSectors", hidden_sectors, 0x80, 0x20, true, 0x74633263fdc61b14)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PARTITION_INFORMATION.PartitionNumber", partition_number, 0xa0, 0x20, true, 0x8d1b2e14ec82a658)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PARTITION_INFORMATION.PartitionType", partition_type, 0xc0, 0x8, true, 0xe5b7bf344cef2971)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PARTITION_INFORMATION.BootIndicator", boot_indicator, 0xc8, 0x8, true, 0x80c7a0e3aa68da)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PARTITION_INFORMATION.RecognizedPartition", recognized_partition, 0xd0, 0x8, true, 0x22bc807aba14ec17)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PARTITION_INFORMATION.RewritePartition", rewrite_partition, 0xd8, 0x8, true, 0x4bc318c5e84b0061)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif