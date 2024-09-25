#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_DRIVER_GLOBALS_V1_1.Driver", driver, 0x0, 0x0, false, 0xc159b92dfc698c61)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_1.DriverFlags", driver_flags, 0x0, 0x0, false, 0x7d90ab1717005a35)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_1.DriverTag", driver_tag, 0x0, 0x0, false, 0xb1a2f4d4e43e4aa0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WDF_DRIVER_GLOBALS_V1_1.DriverName", driver_name, 0x0, 0x0, false, 0xfc4b3ab6cef7f00e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DRIVER_GLOBALS_V1_1.DisplaceDriverUnload", displace_driver_unload, 0x0, 0x0, false, 0x4eed50f2c20bb49f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif