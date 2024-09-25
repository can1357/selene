#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_DRIVER_GLOBALS_V1_15.Driver", driver, 0x0, 0x0, false, 0xc640cee824cadf1e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_15.DriverFlags", driver_flags, 0x0, 0x0, false, 0xfdaf25b56932c62f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_15.DriverTag", driver_tag, 0x0, 0x0, false, 0xf003738c503952c4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WDF_DRIVER_GLOBALS_V1_15.DriverName", driver_name, 0x0, 0x0, false, 0x4b5600bacfd22e3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DRIVER_GLOBALS_V1_15.DisplaceDriverUnload", displace_driver_unload, 0x0, 0x0, false, 0x1d661e498318e4a9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif