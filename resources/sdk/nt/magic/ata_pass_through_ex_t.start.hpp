#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATA_PASS_THROUGH_EX.Length", length, 0x0, 0x10, true, 0xcb6af0fb87bf675f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATA_PASS_THROUGH_EX.AtaFlags", ata_flags, 0x10, 0x10, true, 0x86c0dbfc21c5a9ee)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_EX.PathId", path_id, 0x20, 0x8, true, 0x73340a6404dd110f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_EX.TargetId", target_id, 0x28, 0x8, true, 0x8b062c3df37b7656)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_EX.Lun", lun, 0x30, 0x8, true, 0x5df780c69a2bd109)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_EX.ReservedAsUchar", reserved_as_uchar, 0x38, 0x8, true, 0x6243fa90105879fe)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_EX.DataTransferLength", data_transfer_length, 0x40, 0x20, true, 0x59b609f2b5d70c7b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_EX.TimeOutValue", time_out_value, 0x60, 0x20, true, 0xcd7a29c4e982c5bd)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_EX.ReservedAsUlong", reserved_as_ulong, 0x80, 0x20, true, 0x8ad8a67586b5163b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ATA_PASS_THROUGH_EX.DataBufferOffset", data_buffer_offset, 0xc0, 0x40, true, 0xe95adf19d4916b98)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_ATA_PASS_THROUGH_EX.PreviousTaskFile", previous_task_file, 0x100, 0x40, true, 0x5f5d65914d37e623)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_ATA_PASS_THROUGH_EX.CurrentTaskFile", current_task_file, 0x140, 0x40, true, 0x5b23602d188c9c66)
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