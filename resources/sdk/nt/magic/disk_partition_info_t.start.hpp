#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PARTITION_INFO.SizeOfPartitionInfo", size_of_partition_info, 0x0, 0x20, true, 0x110f05d2b837e6ca)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::partition_style_t), "_DISK_PARTITION_INFO.PartitionStyle", partition_style, 0x20, 0x20, true, 0x37d1ddff8e89173b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PARTITION_INFO.Mbr.Signature", signature, 0x0, 0x20, true, 0xdc6727cce3988de7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PARTITION_INFO.Mbr.CheckSum", check_sum, 0x20, 0x20, true, 0x814737fb180eb390)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_mbr_t), "_DISK_PARTITION_INFO.Mbr", mbr, 0x40, 0x40, true, 0x38b4f0f1b56e88b9)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DISK_PARTITION_INFO.Gpt.DiskId", disk_id, 0x0, 0x80, true, 0xbf8a661c27200eaf)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_gpt_t), "_DISK_PARTITION_INFO.Gpt", gpt, 0x40, 0x80, true, 0x7a794cce55be8b72)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif