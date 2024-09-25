#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::srbexdatatype_t), "_SRBEX_DATA_SCSI_CDB16.Type", type, 0x0, 0x20, true, 0xcd1fdc426426faae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRBEX_DATA_SCSI_CDB16.Length", length, 0x20, 0x20, true, 0x3743219cadc41c9d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRBEX_DATA_SCSI_CDB16.ScsiStatus", scsi_status, 0x40, 0x8, true, 0x90cb232c603f9650)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRBEX_DATA_SCSI_CDB16.SenseInfoBufferLength", sense_info_buffer_length, 0x48, 0x8, true, 0xa2b04ec527ecf23b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRBEX_DATA_SCSI_CDB16.CdbLength", cdb_length, 0x50, 0x8, true, 0xbb627d367469aa07)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SRBEX_DATA_SCSI_CDB16.SenseInfoBuffer", sense_info_buffer, 0x80, 0x40, true, 0x4d47dee9475f1539)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_SRBEX_DATA_SCSI_CDB16.Cdb", cdb, 0xc0, 0x80, true, 0xf0a2f20ab08abc1b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif