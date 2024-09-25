#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_DRIVER_GLOBALS.Driver", driver, 0x0, 0x40, true, 0xd76e00ac39557498)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS.DriverFlags", driver_flags, 0x40, 0x20, true, 0xf26a67b55715b40)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_GLOBALS.DriverTag", driver_tag, 0x60, 0x20, true, 0xfb89e6ab0da71768)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WDF_DRIVER_GLOBALS.DriverName", driver_name, 0x80, 0x0, true, 0xe9721ebb1287195a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DRIVER_GLOBALS.DisplaceDriverUnload", displace_driver_unload, 0x180, 0x8, true, 0x4772cb9dd873fc5f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif