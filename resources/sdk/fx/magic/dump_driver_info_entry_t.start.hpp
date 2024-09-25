#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "_FX_DUMP_DRIVER_INFO_ENTRY.FxDriverGlobals", fx_driver_globals, 0x0, 0x40, true, 0x7d88ff4835d3ea6e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::version_t), "_FX_DUMP_DRIVER_INFO_ENTRY.Version", version, 0x40, 0x60, true, 0x8423a18f3f8cd947)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_FX_DUMP_DRIVER_INFO_ENTRY.DriverName", driver_name, 0xa0, 0x0, true, 0x8b0e198d14350f54)
#else
#define _m00
#define _m01
#define _m02
#endif