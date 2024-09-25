#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFDEVICE_TRIAGE_INFO_V1_17.DeviceInitSize", device_init_size, 0x0, 0x0, false, 0x78bd46f3a1c4aaed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFDEVICE_TRIAGE_INFO_V1_17.DeviceDriver", device_driver, 0x0, 0x0, false, 0xa6a23869fa8cecef)
#else
#define _m00
#define _m01
#endif