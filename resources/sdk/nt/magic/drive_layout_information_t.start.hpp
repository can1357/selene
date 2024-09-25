#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DRIVE_LAYOUT_INFORMATION.PartitionCount", partition_count, 0x0, 0x20, true, 0x4ba456e1de6afd9c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DRIVE_LAYOUT_INFORMATION.Signature", signature, 0x20, 0x20, true, 0x5e37367393aa6216)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::partition_information_t, 1>), "_DRIVE_LAYOUT_INFORMATION.PartitionEntry", partition_entry, 0x40, 0x0, true, 0x1f3d6a86ec74d8f2)
#else
#define _m00
#define _m01
#define _m02
#endif