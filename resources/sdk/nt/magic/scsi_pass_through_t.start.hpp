#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCSI_PASS_THROUGH.Length", length, 0x0, 0x10, true, 0x19f9e9762de9d850)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH.ScsiStatus", scsi_status, 0x10, 0x8, true, 0x61fc854edb416e79)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH.PathId", path_id, 0x18, 0x8, true, 0x531cc8a9e0674f46)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH.TargetId", target_id, 0x20, 0x8, true, 0xc378ff75f1731050)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH.Lun", lun, 0x28, 0x8, true, 0x6911eca90259c2ae)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH.CdbLength", cdb_length, 0x30, 0x8, true, 0x680b0e5b4d95618d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH.SenseInfoLength", sense_info_length, 0x38, 0x8, true, 0xca58c56261c71af4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH.DataIn", data_in, 0x40, 0x8, true, 0x9997e65b0f596b24)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH.DataTransferLength", data_transfer_length, 0x60, 0x20, true, 0x7530cff094aced20)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH.TimeOutValue", time_out_value, 0x80, 0x20, true, 0x3e4094bc1f875ece)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCSI_PASS_THROUGH.DataBufferOffset", data_buffer_offset, 0xc0, 0x40, true, 0x2e7c4f69b25e2199)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH.SenseInfoOffset", sense_info_offset, 0x100, 0x20, true, 0x8b73ec8ec1f0a725)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_SCSI_PASS_THROUGH.Cdb", cdb, 0x120, 0x80, true, 0x122f93baa3a9e5ec)
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