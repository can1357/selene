#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCSI_PASS_THROUGH_DIRECT32.Length", length, 0x0, 0x10, true, 0x1903a7beef705c20)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT32.ScsiStatus", scsi_status, 0x10, 0x8, true, 0xebcd66db6d122080)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT32.PathId", path_id, 0x18, 0x8, true, 0x4c6070a060d68df6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT32.TargetId", target_id, 0x20, 0x8, true, 0xab0951a50b362421)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT32.Lun", lun, 0x28, 0x8, true, 0x9a37ca5fe699a363)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT32.CdbLength", cdb_length, 0x30, 0x8, true, 0x577d235db548688d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT32.SenseInfoLength", sense_info_length, 0x38, 0x8, true, 0x24194c543fcf64a1)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT32.DataIn", data_in, 0x40, 0x8, true, 0x486ef16a3a9ad14)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT32.DataTransferLength", data_transfer_length, 0x60, 0x20, true, 0xee81b055f9fa63d9)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT32.TimeOutValue", time_out_value, 0x80, 0x20, true, 0xdbd681dc5ec8f4dc)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void __ptr32*), "_SCSI_PASS_THROUGH_DIRECT32.DataBuffer", data_buffer, 0xa0, 0x20, true, 0xfd79aed5aecc8568)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT32.SenseInfoOffset", sense_info_offset, 0xc0, 0x20, true, 0xe3d217485dae7951)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_SCSI_PASS_THROUGH_DIRECT32.Cdb", cdb, 0xe0, 0x80, true, 0x3a6be19f13641418)
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