#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PARTITION_INFORMATION_MBR.PartitionType", partition_type, 0x0, 0x8, true, 0x431bce1422ad4b23)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PARTITION_INFORMATION_MBR.BootIndicator", boot_indicator, 0x8, 0x8, true, 0xfc7fe617f13eab84)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PARTITION_INFORMATION_MBR.RecognizedPartition", recognized_partition, 0x10, 0x8, true, 0x7a5123e9b4e680dc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PARTITION_INFORMATION_MBR.HiddenSectors", hidden_sectors, 0x20, 0x20, true, 0x9fec39752c59707d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_PARTITION_INFORMATION_MBR.PartitionId", partition_id, 0x40, 0x80, true, 0x3bcafbf3f48a836c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif