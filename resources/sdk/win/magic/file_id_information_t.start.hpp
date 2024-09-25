#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_ID_INFORMATION.VolumeSerialNumber", volume_serial_number, 0x0, 0x40, true, 0xafa10bbce84e171d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "_FILE_ID_INFORMATION.FileId", file_id, 0x40, 0x80, true, 0x4b7d711b1db7574f)
#else
#define _m00
#define _m01
#endif