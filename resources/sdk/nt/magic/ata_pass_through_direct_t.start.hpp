#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATA_PASS_THROUGH_DIRECT.Length", length, 0x0, 0x10, true, 0xaf0afd01ef217f84)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATA_PASS_THROUGH_DIRECT.AtaFlags", ata_flags, 0x10, 0x10, true, 0x35351eba32ac96c9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_DIRECT.PathId", path_id, 0x20, 0x8, true, 0x32371dd540b05880)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_DIRECT.TargetId", target_id, 0x28, 0x8, true, 0x52599383194b8643)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_DIRECT.Lun", lun, 0x30, 0x8, true, 0xbf2ddf996a67d8e1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_DIRECT.ReservedAsUchar", reserved_as_uchar, 0x38, 0x8, true, 0xdf265f5fcc46aa1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_DIRECT.DataTransferLength", data_transfer_length, 0x40, 0x20, true, 0x454fc2412247ce21)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_DIRECT.TimeOutValue", time_out_value, 0x60, 0x20, true, 0xab47e329283e6853)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_DIRECT.ReservedAsUlong", reserved_as_ulong, 0x80, 0x20, true, 0xef5e7484130f58e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ATA_PASS_THROUGH_DIRECT.DataBuffer", data_buffer, 0xc0, 0x40, true, 0x9e37d16c333c7274)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_ATA_PASS_THROUGH_DIRECT.PreviousTaskFile", previous_task_file, 0x100, 0x40, true, 0x87c890b1c9822ee7)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_ATA_PASS_THROUGH_DIRECT.CurrentTaskFile", current_task_file, 0x140, 0x40, true, 0xcf09fc01f8b0eec6)
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