#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32_EX.Version", version, 0x0, 0x20, true, 0x19b15d6f51643194)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32_EX.Length", length, 0x20, 0x20, true, 0xe61f8a194227d2dd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32_EX.CdbLength", cdb_length, 0x40, 0x20, true, 0x84bf4a2bc65ee413)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32_EX.StorAddressLength", stor_address_length, 0x60, 0x20, true, 0xf61e795c3448dcd4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH32_EX.ScsiStatus", scsi_status, 0x80, 0x8, true, 0x84d749a8a8b2aedd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH32_EX.SenseInfoLength", sense_info_length, 0x88, 0x8, true, 0x9608160e2ac3943f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH32_EX.DataDirection", data_direction, 0x90, 0x8, true, 0xdc102853494f5653)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32_EX.TimeOutValue", time_out_value, 0xa0, 0x20, true, 0x7dd040d2db8a7ab0)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32_EX.StorAddressOffset", stor_address_offset, 0xc0, 0x20, true, 0x6b45f38e3316f5a2)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32_EX.SenseInfoOffset", sense_info_offset, 0xe0, 0x20, true, 0x86f327a5c043e9bb)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32_EX.DataOutTransferLength", data_out_transfer_length, 0x100, 0x20, true, 0x91c20f89efe2b931)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32_EX.DataInTransferLength", data_in_transfer_length, 0x120, 0x20, true, 0xaf899d3a138e1e4a)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32_EX.DataOutBufferOffset", data_out_buffer_offset, 0x140, 0x20, true, 0x5efb76fe18bde9b8)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH32_EX.DataInBufferOffset", data_in_buffer_offset, 0x160, 0x20, true, 0x92008f1bab6f503d)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SCSI_PASS_THROUGH32_EX.Cdb", cdb, 0x180, 0x8, true, 0x1b7f48e485690bff)
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