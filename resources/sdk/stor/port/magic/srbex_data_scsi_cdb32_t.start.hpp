#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::srbexdatatype_t), "_SRBEX_DATA_SCSI_CDB32.Type", type, 0x0, 0x20, true, 0x776fbad37a559d1d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRBEX_DATA_SCSI_CDB32.Length", length, 0x20, 0x20, true, 0x59046d9f0773a316)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRBEX_DATA_SCSI_CDB32.ScsiStatus", scsi_status, 0x40, 0x8, true, 0x41183d2a9f4c8078)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRBEX_DATA_SCSI_CDB32.SenseInfoBufferLength", sense_info_buffer_length, 0x48, 0x8, true, 0x3514e72c95ecf8cf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRBEX_DATA_SCSI_CDB32.CdbLength", cdb_length, 0x50, 0x8, true, 0x18b233c84539c219)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SRBEX_DATA_SCSI_CDB32.SenseInfoBuffer", sense_info_buffer, 0x80, 0x40, true, 0x8822059ca9d72064)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_SRBEX_DATA_SCSI_CDB32.Cdb", cdb, 0xc0, 0x0, true, 0x36242348e4b8b0f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif