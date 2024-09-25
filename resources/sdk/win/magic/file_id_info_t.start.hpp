#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_ID_INFO.VolumeSerialNumber", volume_serial_number, 0x0, 0x40, true, 0xdb1659ec58b5edae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "_FILE_ID_INFO.FileId", file_id, 0x40, 0x80, true, 0xeda3c04e019d0291)
#else
#define _m00
#define _m01
#endif