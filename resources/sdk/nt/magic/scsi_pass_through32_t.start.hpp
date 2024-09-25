#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCSI_PASS_THROUGH32.Length", length, 0x0, 0x10, true, 0x1ef2c7f3851e114f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH32.ScsiStatus", scsi_status, 0x10, 0x8, true, 0x4074ccf956bfb26e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH32.PathId", path_id, 0x18, 0x8, true, 0xdb15b17509726052)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH32.TargetId", target_id, 0x20, 0x8, true, 0x3ae82dca7e38b1a3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH32.Lun", lun, 0x28, 0x8, true, 0xebedb77b7a39e69d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH32.CdbLength", cdb_length, 0x30, 0x8, true, 0x9c81a5d14f75314c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH32.SenseInfoLength", sense_info_length, 0x38, 0x8, true, 0xb9fd3fea59ce60df)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH32.DataIn", data_in, 0x40, 0x8, true, 0xf36261ce45444624)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32.DataTransferLength", data_transfer_length, 0x60, 0x20, true, 0xd13c7e3624d7ccd6)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32.TimeOutValue", time_out_value, 0x80, 0x20, true, 0x55d7d9dbc27f8c0c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32.DataBufferOffset", data_buffer_offset, 0xa0, 0x20, true, 0x8c7c484c3438e662)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32.SenseInfoOffset", sense_info_offset, 0xc0, 0x20, true, 0x96eccc34dd13be03)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_SCSI_PASS_THROUGH32.Cdb", cdb, 0xe0, 0x80, true, 0x761cef9aa9dc7fd1)
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