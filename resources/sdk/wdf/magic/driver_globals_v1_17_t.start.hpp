#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_DRIVER_GLOBALS_V1_17.Driver", driver, 0x0, 0x0, false, 0x43c827c3bd787bab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_17.DriverFlags", driver_flags, 0x0, 0x0, false, 0xed1c0033fd9470c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_17.DriverTag", driver_tag, 0x0, 0x0, false, 0xb9790eff112156f3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WDF_DRIVER_GLOBALS_V1_17.DriverName", driver_name, 0x0, 0x0, false, 0x5b8ffc91a8d25dbd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DRIVER_GLOBALS_V1_17.DisplaceDriverUnload", displace_driver_unload, 0x0, 0x0, false, 0x6c4931cb0b44174f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif