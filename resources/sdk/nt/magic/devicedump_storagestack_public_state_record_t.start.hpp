#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.Cdb", cdb, 0x0, 0x80, true, 0x2ece94273b58681)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.Command", command, 0x80, 0x80, true, 0x523533747b5e1b56)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.StartTime", start_time, 0x100, 0x40, true, 0xc70bbe417885aa7a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.EndTime", end_time, 0x140, 0x40, true, 0xcbcc584620e466bc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.OperationStatus", operation_status, 0x180, 0x20, true, 0xee945edb14d95381)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.OperationError", operation_error, 0x1a0, 0x20, true, 0x56962c81903c2179)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.StackSpecific.ExternalStack.dwReserved", dw_reserved, 0x0, 0x20, true, 0x742faff6beb3cf6a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_external_stack_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.StackSpecific.ExternalStack", external_stack, 0x0, 0x20, true, 0x7f3f9ee619abce8c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.StackSpecific.AtaPort.dwAtaPortSpecific", dw_ata_port_specific, 0x0, 0x20, true, 0x65b7ca3355049474)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_ata_port_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.StackSpecific.AtaPort", ata_port, 0x0, 0x20, true, 0x414cd95217b75e73)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.StackSpecific.StorPort.SrbTag", srb_tag, 0x0, 0x20, true, 0x356cbf182eed85bd)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_stor_port_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.StackSpecific.StorPort", stor_port, 0x0, 0x20, true, 0xb5ad3203d3eef254)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_stack_specific_t), "_DEVICEDUMP_STORAGESTACK_PUBLIC_STATE_RECORD.StackSpecific", stack_specific, 0x1c0, 0x20, true, 0x6c929b2bf7513e97)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif