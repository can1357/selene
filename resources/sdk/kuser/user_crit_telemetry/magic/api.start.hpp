#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$getInstance@UserCritTelemetry$win32kbase.sys", 0x2e4b0, 0x0, true, 0xfc57f0a2aad59b06)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateUserCritInfo@UserCritTelemetry$win32kbase.sys", 0x2e2c0, 0x0, true, 0xa20e50a9aadc74fa)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif