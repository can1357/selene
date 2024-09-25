#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_DRIVER_GLOBALS_V1_13.Driver", driver, 0x0, 0x0, false, 0xb2d23f6e75cfb158)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_13.DriverFlags", driver_flags, 0x0, 0x0, false, 0x3b0735a5b4e4c94e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_13.DriverTag", driver_tag, 0x0, 0x0, false, 0x887c98174546e335)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WDF_DRIVER_GLOBALS_V1_13.DriverName", driver_name, 0x0, 0x0, false, 0x862218fecf603265)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DRIVER_GLOBALS_V1_13.DisplaceDriverUnload", displace_driver_unload, 0x0, 0x0, false, 0x5db59ec64567c1c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif