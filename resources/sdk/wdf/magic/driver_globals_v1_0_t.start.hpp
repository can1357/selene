#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_DRIVER_GLOBALS_V1_0.Driver", driver, 0x0, 0x0, false, 0xe7c240384e943221)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_0.DriverFlags", driver_flags, 0x0, 0x0, false, 0x4ba7686109b2753d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_0.DriverTag", driver_tag, 0x0, 0x0, false, 0x62ed7224c0985d2b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WDF_DRIVER_GLOBALS_V1_0.DriverName", driver_name, 0x0, 0x0, false, 0x55608183e3fcf4ea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DRIVER_GLOBALS_V1_0.DisplaceDriverUnload", displace_driver_unload, 0x0, 0x0, false, 0x813f866ec12b025a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif