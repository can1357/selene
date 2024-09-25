#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_DRIVER_GLOBALS_V1_7.Driver", driver, 0x0, 0x0, false, 0x12ff44b3cd83d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_7.DriverFlags", driver_flags, 0x0, 0x0, false, 0x63392bb8eec8b36f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_7.DriverTag", driver_tag, 0x0, 0x0, false, 0xc49aa4a92bd80df1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WDF_DRIVER_GLOBALS_V1_7.DriverName", driver_name, 0x0, 0x0, false, 0xa8a5c32af191b940)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DRIVER_GLOBALS_V1_7.DisplaceDriverUnload", displace_driver_unload, 0x0, 0x0, false, 0xbb92aa93ef216fe6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif