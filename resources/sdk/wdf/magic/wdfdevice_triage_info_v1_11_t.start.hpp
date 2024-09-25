#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFDEVICE_TRIAGE_INFO_V1_11.DeviceInitSize", device_init_size, 0x0, 0x0, false, 0x3bfdbfb7ff9acb5f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFDEVICE_TRIAGE_INFO_V1_11.DeviceDriver", device_driver, 0x0, 0x0, false, 0x563d8cd96a8c837a)
#else
#define _m00
#define _m01
#endif