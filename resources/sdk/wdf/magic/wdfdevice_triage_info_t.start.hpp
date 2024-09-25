#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFDEVICE_TRIAGE_INFO.DeviceInitSize", device_init_size, 0x0, 0x20, true, 0x36b187db8684f61a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFDEVICE_TRIAGE_INFO.DeviceDriver", device_driver, 0x20, 0x20, true, 0x458df900dafc41af)
#else
#define _m00
#define _m01
#endif