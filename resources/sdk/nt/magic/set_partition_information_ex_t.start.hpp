#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::partition_style_t), "_SET_PARTITION_INFORMATION_EX.PartitionStyle", partition_style, 0x0, 0x20, true, 0x1a9214ff03c7587b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::set_partition_information_t), "_SET_PARTITION_INFORMATION_EX.Mbr", mbr, 0x40, 0x8, true, 0xd498485f3040e416)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::partition_information_gpt_t), "_SET_PARTITION_INFORMATION_EX.Gpt", gpt, 0x40, 0x80, true, 0x7c09906ab1826779)
#else
#define _m00
#define _m01
#define _m02
#endif