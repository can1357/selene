#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::srbexdatatype_t), "_SRBEX_DATA_SCSI_CDB_VAR.Type", type, 0x0, 0x20, true, 0xefcd27c527e8ec5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRBEX_DATA_SCSI_CDB_VAR.Length", length, 0x20, 0x20, true, 0x75c0666ab4e5659d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRBEX_DATA_SCSI_CDB_VAR.ScsiStatus", scsi_status, 0x40, 0x8, true, 0x2a7e14bf59bbed0f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRBEX_DATA_SCSI_CDB_VAR.SenseInfoBufferLength", sense_info_buffer_length, 0x48, 0x8, true, 0x6364f24a194aad5a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRBEX_DATA_SCSI_CDB_VAR.CdbLength", cdb_length, 0x60, 0x20, true, 0xb90fb581356bc74b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SRBEX_DATA_SCSI_CDB_VAR.SenseInfoBuffer", sense_info_buffer, 0xc0, 0x40, true, 0xcd9b451759ee4757)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SRBEX_DATA_SCSI_CDB_VAR.Cdb", cdb, 0x100, 0x8, true, 0x2ba1fdf131373a2b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif