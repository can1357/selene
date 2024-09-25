#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FX_POOL_HEADER.Base", base, 0x0, 0x40, true, 0xb28fc38098e7b7e0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FX_POOL_HEADER.FxDriverGlobals", fx_driver_globals, 0x40, 0x40, true, 0x60e7009260fad388)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "FX_POOL_HEADER.AllocationStart", allocation_start, 0x80, 0x20, true, 0xb1452d7f411cd0e4)
#else
#define _m00
#define _m01
#define _m02
#endif