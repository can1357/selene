#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_SCSI_ADDRESS.PathId", path_id, 0x0, 0x8, true, 0x6a5c858fd4dc4298)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_SCSI_ADDRESS.TargetId", target_id, 0x8, 0x8, true, 0x8a04d7dba6a1052b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_SCSI_ADDRESS.Lun", lun, 0x10, 0x8, true, 0x6ad230930fd7102f)
#else
#define _m00
#define _m01
#define _m02
#endif