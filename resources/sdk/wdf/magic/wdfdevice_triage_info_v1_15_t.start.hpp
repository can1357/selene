#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFDEVICE_TRIAGE_INFO_V1_15.DeviceInitSize", device_init_size, 0x0, 0x0, false, 0x6f567ed20ee6b4dd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFDEVICE_TRIAGE_INFO_V1_15.DeviceDriver", device_driver, 0x0, 0x0, false, 0x2f878752a70f53d0)
#else
#define _m00
#define _m01
#endif