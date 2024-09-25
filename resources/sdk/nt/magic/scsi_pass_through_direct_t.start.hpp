#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCSI_PASS_THROUGH_DIRECT.Length", length, 0x0, 0x10, true, 0xfaee5533d695755)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT.ScsiStatus", scsi_status, 0x10, 0x8, true, 0xff4422c652d63fad)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT.PathId", path_id, 0x18, 0x8, true, 0xb9a1d677a8362ccc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT.TargetId", target_id, 0x20, 0x8, true, 0x965e8a149d29c795)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT.Lun", lun, 0x28, 0x8, true, 0x886ae1553078af6e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT.CdbLength", cdb_length, 0x30, 0x8, true, 0x667253fc5619bac3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT.SenseInfoLength", sense_info_length, 0x38, 0x8, true, 0x4637865cb557d1d3)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT.DataIn", data_in, 0x40, 0x8, true, 0x9ae16c5b0cb2604d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT.DataTransferLength", data_transfer_length, 0x60, 0x20, true, 0xa8e4729896a0e1f7)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT.TimeOutValue", time_out_value, 0x80, 0x20, true, 0x597950eeb8e49e36)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_PASS_THROUGH_DIRECT.DataBuffer", data_buffer, 0xc0, 0x40, true, 0x1673cf95f73d645)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT.SenseInfoOffset", sense_info_offset, 0x100, 0x20, true, 0xf787c97f7c1bb51)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_SCSI_PASS_THROUGH_DIRECT.Cdb", cdb, 0x120, 0x80, true, 0xf4ecfdda58c8f57b)
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