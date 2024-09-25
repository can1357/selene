#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT_EX.Version", version, 0x0, 0x20, true, 0x68570c5d44f19ad2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT_EX.Length", length, 0x20, 0x20, true, 0x2afce7fcc88b7d14)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT_EX.CdbLength", cdb_length, 0x40, 0x20, true, 0x685f5deee0c2ce64)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT_EX.StorAddressLength", stor_address_length, 0x60, 0x20, true, 0xed16e2301df89762)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT_EX.ScsiStatus", scsi_status, 0x80, 0x8, true, 0xf17ef55171d7580f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT_EX.SenseInfoLength", sense_info_length, 0x88, 0x8, true, 0xaa80d6790e302ff2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PASS_THROUGH_DIRECT_EX.DataDirection", data_direction, 0x90, 0x8, true, 0x73b7821d3ffc314c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT_EX.TimeOutValue", time_out_value, 0xa0, 0x20, true, 0x2938469f9091c74e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT_EX.StorAddressOffset", stor_address_offset, 0xc0, 0x20, true, 0x5a789f4818ef1cb6)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT_EX.SenseInfoOffset", sense_info_offset, 0xe0, 0x20, true, 0x928bfd7b641b1841)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT_EX.DataOutTransferLength", data_out_transfer_length, 0x100, 0x20, true, 0x6452028bc2dc0d8b)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PASS_THROUGH_DIRECT_EX.DataInTransferLength", data_in_transfer_length, 0x120, 0x20, true, 0xa3fcda2442e04cb1)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_PASS_THROUGH_DIRECT_EX.DataOutBuffer", data_out_buffer, 0x140, 0x40, true, 0x42cf3154b35d594e)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_PASS_THROUGH_DIRECT_EX.DataInBuffer", data_in_buffer, 0x180, 0x40, true, 0xd5221832f6c92b11)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SCSI_PASS_THROUGH_DIRECT_EX.Cdb", cdb, 0x1c0, 0x8, true, 0x76e92cee9fdaae28)
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