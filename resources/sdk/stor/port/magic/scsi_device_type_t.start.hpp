#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_SCSI_DEVICE_TYPE.Name", name, 0x0, 0x40, true, 0x854997c93c9190a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_SCSI_DEVICE_TYPE.GenericName", generic_name, 0x40, 0x40, true, 0x7391f661d1c4faeb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_SCSI_DEVICE_TYPE.DeviceMap", device_map, 0x80, 0x40, true, 0xdd2ca50b159290c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_DEVICE_TYPE.IsStorage", is_storage, 0xc0, 0x8, true, 0x9f0e683a100cbce5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif