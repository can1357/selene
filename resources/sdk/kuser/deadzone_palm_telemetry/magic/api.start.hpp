#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ClearSession@DeadzonePalmTelemetry$win32kbase.sys", 0x18bbd0, 0x0, true, 0x25d260234deedfa2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateTelemetryBuffer@DeadzonePalmTelemetry$win32kbase.sys", 0x18be28, 0x0, true, 0xe7e5d0888782a2d9)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_UploadTelemetryData@DeadzonePalmTelemetry$win32kbase.sys", 0x18c4a8, 0x0, true, 0xd4fd6bc25869e525)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif