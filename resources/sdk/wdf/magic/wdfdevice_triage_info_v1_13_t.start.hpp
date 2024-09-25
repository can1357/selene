#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFDEVICE_TRIAGE_INFO_V1_13.DeviceInitSize", device_init_size, 0x0, 0x0, false, 0x2f32fd9dabb28c1e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFDEVICE_TRIAGE_INFO_V1_13.DeviceDriver", device_driver, 0x0, 0x0, false, 0x395f29c77348f23)
#else
#define _m00
#define _m01
#endif