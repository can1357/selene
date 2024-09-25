#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_DRIVER_GLOBALS_V1_9.Driver", driver, 0x0, 0x0, false, 0xb1e8a71e7c9f3971)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_9.DriverFlags", driver_flags, 0x0, 0x0, false, 0xde39fa141706c8e1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_9.DriverTag", driver_tag, 0x0, 0x0, false, 0xcd7c4a965af134b7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WDF_DRIVER_GLOBALS_V1_9.DriverName", driver_name, 0x0, 0x0, false, 0x9dc0bfc19da3a942)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DRIVER_GLOBALS_V1_9.DisplaceDriverUnload", displace_driver_unload, 0x0, 0x0, false, 0x1319bd9348f29c9f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif