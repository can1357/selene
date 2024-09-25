#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_SIGNATURE.PartitionStyle", partition_style, 0x0, 0x20, true, 0x56016cb2cff218e5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_SIGNATURE.Mbr.Signature", signature, 0x0, 0x20, true, 0xfe2906e226cdd36b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_SIGNATURE.Mbr.CheckSum", check_sum, 0x20, 0x20, true, 0x661eb23610edb1f3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_mbr_t), "_DISK_SIGNATURE.Mbr", mbr, 0x20, 0x40, true, 0xaac53e96a1e416d0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DISK_SIGNATURE.Gpt.DiskId", disk_id, 0x0, 0x80, true, 0xd264804c824f6ee8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_gpt_t), "_DISK_SIGNATURE.Gpt", gpt, 0x20, 0x80, true, 0x5bf8a016de260161)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif