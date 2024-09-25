#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATA_PASS_THROUGH_EX32.Length", length, 0x0, 0x10, true, 0xf9c3724657a75153)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATA_PASS_THROUGH_EX32.AtaFlags", ata_flags, 0x10, 0x10, true, 0xdeb10ecab5f3b784)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_EX32.PathId", path_id, 0x20, 0x8, true, 0x66206be6991bda00)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_EX32.TargetId", target_id, 0x28, 0x8, true, 0x32ce994175c27888)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_EX32.Lun", lun, 0x30, 0x8, true, 0xd1e097e84aaa92f5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ATA_PASS_THROUGH_EX32.ReservedAsUchar", reserved_as_uchar, 0x38, 0x8, true, 0x1cb42c7e964ced8c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_EX32.DataTransferLength", data_transfer_length, 0x40, 0x20, true, 0x28e59b2c5cd7510c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_EX32.TimeOutValue", time_out_value, 0x60, 0x20, true, 0x44c3550ed681bd9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_EX32.ReservedAsUlong", reserved_as_ulong, 0x80, 0x20, true, 0x92f222797c9902dd)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ATA_PASS_THROUGH_EX32.DataBufferOffset", data_buffer_offset, 0xa0, 0x20, true, 0x3cf61941964baa3f)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_ATA_PASS_THROUGH_EX32.PreviousTaskFile", previous_task_file, 0xc0, 0x40, true, 0xc1454bd1bd845cd7)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_ATA_PASS_THROUGH_EX32.CurrentTaskFile", current_task_file, 0x100, 0x40, true, 0x777e0514d08832a0)
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