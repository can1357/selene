#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::partition_style_t), "_PARTITION_INFORMATION_EX.PartitionStyle", partition_style, 0x0, 0x20, true, 0x8dbca2c902b2d4c4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_PARTITION_INFORMATION_EX.StartingOffset", starting_offset, 0x40, 0x40, true, 0xd1647dd8ef0e7a31)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_PARTITION_INFORMATION_EX.PartitionLength", partition_length, 0x80, 0x40, true, 0x3f2994e4bbfe55bd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PARTITION_INFORMATION_EX.PartitionNumber", partition_number, 0xc0, 0x20, true, 0x3dfdd5aaddd5e118)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PARTITION_INFORMATION_EX.RewritePartition", rewrite_partition, 0xe0, 0x8, true, 0x473bc574f098381f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PARTITION_INFORMATION_EX.IsServicePartition", is_service_partition, 0xe8, 0x8, true, 0xe21ba111055415b5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::partition_information_mbr_t), "_PARTITION_INFORMATION_EX.Mbr", mbr, 0x100, 0xc0, true, 0x6a8c6eab4b271083)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::partition_information_gpt_t), "_PARTITION_INFORMATION_EX.Gpt", gpt, 0x100, 0x80, true, 0x767d55f10da46c68)
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