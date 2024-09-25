#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATA_PASS_THROUGH_DIRECT32.Length", length, 0x0, 0x10, true, 0xcfe3d87fb082f21f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATA_PASS_THROUGH_DIRECT32.AtaFlags", ata_flags, 0x10, 0x10, true, 0x1b294ed8be1b6bf9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_DIRECT32.PathId", path_id, 0x20, 0x8, true, 0xaecaf483a83bef7c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_DIRECT32.TargetId", target_id, 0x28, 0x8, true, 0x1ffb2f3dd96b5ebc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_DIRECT32.Lun", lun, 0x30, 0x8, true, 0xa940a6e7fd4f3583)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_DIRECT32.ReservedAsUchar", reserved_as_uchar, 0x38, 0x8, true, 0x3c3cc5c1c831b916)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_DIRECT32.DataTransferLength", data_transfer_length, 0x40, 0x20, true, 0x2fae1f1009733653)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_DIRECT32.TimeOutValue", time_out_value, 0x60, 0x20, true, 0xdf1f0954001a8bfd)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_DIRECT32.ReservedAsUlong", reserved_as_ulong, 0x80, 0x20, true, 0xd1d20f2a1e9251fc)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void __ptr32*), "_ATA_PASS_THROUGH_DIRECT32.DataBuffer", data_buffer, 0xa0, 0x20, true, 0x722fb3fe3a8d86dd)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_ATA_PASS_THROUGH_DIRECT32.PreviousTaskFile", previous_task_file, 0xc0, 0x40, true, 0x4db0b8ee38021344)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_ATA_PASS_THROUGH_DIRECT32.CurrentTaskFile", current_task_file, 0x100, 0x40, true, 0x5d5e825c0039f9d8)
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
#endif