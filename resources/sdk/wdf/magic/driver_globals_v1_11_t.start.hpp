#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_DRIVER_GLOBALS_V1_11.Driver", driver, 0x0, 0x0, false, 0xe1c1bdb45fa8198a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_11.DriverFlags", driver_flags, 0x0, 0x0, false, 0xe75a4570894b13ba)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS_V1_11.DriverTag", driver_tag, 0x0, 0x0, false, 0x1f2ad689671c0e7d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WDF_DRIVER_GLOBALS_V1_11.DriverName", driver_name, 0x0, 0x0, false, 0xb485feebdb1f79db)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DRIVER_GLOBALS_V1_11.DisplaceDriverUnload", displace_driver_unload, 0x0, 0x0, false, 0x852b8cda885f8b96)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif