#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_EX.Version", version, 0x0, 0x20, true, 0x444cd5aa36fca40e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_EX.Length", length, 0x20, 0x20, true, 0x17cb015c50e39bdc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_EX.CdbLength", cdb_length, 0x40, 0x20, true, 0x8acb543e8704f535)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_EX.StorAddressLength", stor_address_length, 0x60, 0x20, true, 0x822cefc6dc9e429f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_EX.ScsiStatus", scsi_status, 0x80, 0x8, true, 0x9abb74d62bacef6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_EX.SenseInfoLength", sense_info_length, 0x88, 0x8, true, 0x83e8958e7c5247ff)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_EX.DataDirection", data_direction, 0x90, 0x8, true, 0x851c8c940c3eca21)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_EX.TimeOutValue", time_out_value, 0xa0, 0x20, true, 0xcb6745f925b51171)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_EX.StorAddressOffset", stor_address_offset, 0xc0, 0x20, true, 0xfca100584ca48af7)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_EX.SenseInfoOffset", sense_info_offset, 0xe0, 0x20, true, 0x518479b02e306758)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_EX.DataOutTransferLength", data_out_transfer_length, 0x100, 0x20, true, 0xcbb0925bd60279f2)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_EX.DataInTransferLength", data_in_transfer_length, 0x120, 0x20, true, 0x795a35903094c7ae)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCSI_PASS_THROUGH_EX.DataOutBufferOffset", data_out_buffer_offset, 0x140, 0x40, true, 0xf08fffe7a234f916)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SCSI_PASS_THROUGH_EX.DataInBufferOffset", data_in_buffer_offset, 0x180, 0x40, true, 0xb6780395314affce)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SCSI_PASS_THROUGH_EX.Cdb", cdb, 0x1c0, 0x8, true, 0x41214f80deeace5f)
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