#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::partition_style_t), "_CREATE_DISK.PartitionStyle", partition_style, 0x0, 0x20, true, 0x67e6abfb0b7e59b1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::create_disk_mbr_t), "_CREATE_DISK.Mbr", mbr, 0x20, 0x20, true, 0xb82b133f98740e48)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::create_disk_gpt_t), "_CREATE_DISK.Gpt", gpt, 0x20, 0xa0, true, 0x6bb3808cf112b5e7)
#else
#define _m00
#define _m01
#define _m02
#endif