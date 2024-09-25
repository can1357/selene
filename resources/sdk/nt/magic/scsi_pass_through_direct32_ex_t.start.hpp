#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT32_EX.Version", version, 0x0, 0x20, true, 0x3dd7705ed468f124)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT32_EX.Length", length, 0x20, 0x20, true, 0x280de45b1c6b7a4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT32_EX.CdbLength", cdb_length, 0x40, 0x20, true, 0xe81d8f5ed3ab32f5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT32_EX.StorAddressLength", stor_address_length, 0x60, 0x20, true, 0x3f9c892d7df578ce)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT32_EX.ScsiStatus", scsi_status, 0x80, 0x8, true, 0x94f1e4081385e0a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT32_EX.SenseInfoLength", sense_info_length, 0x88, 0x8, true, 0x5b99e13d0796e15d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT32_EX.DataDirection", data_direction, 0x90, 0x8, true, 0xd055a4c95b6dbfe5)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT32_EX.TimeOutValue", time_out_value, 0xa0, 0x20, true, 0xff0bb3ae00e87dba)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT32_EX.StorAddressOffset", stor_address_offset, 0xc0, 0x20, true, 0xc06c8310c87c4f73)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT32_EX.SenseInfoOffset", sense_info_offset, 0xe0, 0x20, true, 0xbd08c821c1b4c6af)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT32_EX.DataOutTransferLength", data_out_transfer_length, 0x100, 0x20, true, 0x9f4047620d464401)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT32_EX.DataInTransferLength", data_in_transfer_length, 0x120, 0x20, true, 0x7bc73e87372e51c1)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void __ptr32*), "_SCSI_PASS_THROUGH_DIRECT32_EX.DataOutBuffer", data_out_buffer, 0x140, 0x20, true, 0xb2ab5a7cfd518f5c)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void __ptr32*), "_SCSI_PASS_THROUGH_DIRECT32_EX.DataInBuffer", data_in_buffer, 0x160, 0x20, true, 0x7e2cd8f3397d9f27)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SCSI_PASS_THROUGH_DIRECT32_EX.Cdb", cdb, 0x180, 0x8, true, 0xc8fc8589776130e9)
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
#define _m13
#define _m14
#endif