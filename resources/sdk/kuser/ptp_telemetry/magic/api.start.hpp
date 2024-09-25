#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDeviceData@PTPTelemetry$win32kbase.sys", 0x1ad9f8, 0x0, true, 0x529c9a703e21aa80)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnSettingsAvailable@PTPTelemetry$win32kbase.sys", 0x1ae480, 0x0, true, 0x1b5ae009c2587294)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnUserLogin@PTPTelemetry$win32kbase.sys", 0x1ae7c0, 0x0, true, 0x8f25e4d7f54a71d3)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PTPConfigUpdateEx@PTPTelemetry$win32kbase.sys", 0x1ae7f8, 0x0, true, 0xf91cac976c278a4f)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_HasTpDevice@PTPTelemetry$win32kbase.sys", 0x25f4c8, 0x0, true, 0xdc276481eb629ca)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_SettingsFired@PTPTelemetry$win32kbase.sys", 0x25f4c9, 0x0, true, 0xfa7d2927232160dd)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_SettingsReady@PTPTelemetry$win32kbase.sys", 0x257ce0, 0x0, true, 0x52fa5618b6a0bf62)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ShouldPtpSettingFire@PTPTelemetry$win32kbase.sys", 0x1af390, 0x0, true, 0xa50be7f9c6c1091b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif