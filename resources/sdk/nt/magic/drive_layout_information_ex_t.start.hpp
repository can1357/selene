#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DRIVE_LAYOUT_INFORMATION_EX.PartitionStyle", partition_style, 0x0, 0x20, true, 0xf342bc40693ce6bb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DRIVE_LAYOUT_INFORMATION_EX.PartitionCount", partition_count, 0x20, 0x20, true, 0x711694ddb35f1f3a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::drive_layout_information_mbr_t), "_DRIVE_LAYOUT_INFORMATION_EX.Mbr", mbr, 0x40, 0x40, true, 0x96b5c030060758b0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::drive_layout_information_gpt_t), "_DRIVE_LAYOUT_INFORMATION_EX.Gpt", gpt, 0x40, 0x40, true, 0x77f2239fa9e10448)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::partition_information_ex_t, 1>), "_DRIVE_LAYOUT_INFORMATION_EX.PartitionEntry", partition_entry, 0x180, 0x80, true, 0x8ffe43eb6b876186)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif