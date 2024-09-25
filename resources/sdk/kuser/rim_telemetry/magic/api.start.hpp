#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogNonPointerDeviceStateChange@RimTelemetry$win32kbase.sys", 0x0, 0x0, false, 0x2b007f97f0f4bbee)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetHidVidPidStrings@RimTelemetry$win32kbase.sys", 0x15db00, 0x0, true, 0xf705c88b0f824232)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogPointerDeviceStateChange@RimTelemetry$win32kbase.sys", 0x15db74, 0x0, true, 0xe7f49cf83e97f0d1)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PointerDeviceTypeToString@RimTelemetry$win32kbase.sys", 0x15e11c, 0x0, true, 0x5d8025946ee07eff)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportRimDevice@RimTelemetry$win32kbase.sys", 0xb739c, 0x0, true, 0x7d246e131c63d24a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif