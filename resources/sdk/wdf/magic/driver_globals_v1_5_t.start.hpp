#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_DRIVER_GLOBALS_V1_5.Driver", driver, 0x0, 0x0, false, 0xbc5eda7b29c1e573)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_5.DriverFlags", driver_flags, 0x0, 0x0, false, 0x2a9aac7f758d97ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_5.DriverTag", driver_tag, 0x0, 0x0, false, 0xcc31a7890872af0b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WDF_DRIVER_GLOBALS_V1_5.DriverName", driver_name, 0x0, 0x0, false, 0x9c5f82db042f8141)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DRIVER_GLOBALS_V1_5.DisplaceDriverUnload", displace_driver_unload, 0x0, 0x0, false, 0x807fff1e1e075185)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif