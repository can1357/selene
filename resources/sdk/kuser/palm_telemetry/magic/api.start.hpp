#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_ProcessTouchPacket@PalmTelemetry$win32kbase.sys", 0x18c08c, 0x0, true, 0x1cc502947f2c31dd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_BufferPenPacket@PalmTelemetry$win32kbase.sys", 0x18be98, 0x0, true, 0xe17d66ece0b03232)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_DiscardOldTouchPackets@PalmTelemetry$win32kbase.sys", 0x18bf08, 0x0, true, 0xb832e055f8f5e20b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_ProcessPenPacket@PalmTelemetry$win32kbase.sys", 0x18bfa8, 0x0, true, 0x23bf2859cdf2ca59)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_Report@PalmTelemetry$win32kbase.sys", 0x18c110, 0x0, true, 0x925fed849d787755)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_ResetTelemetryData@PalmTelemetry$win32kbase.sys", 0x18c384, 0x0, true, 0x4d6c20294f8191e3)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_TryBuffer@PalmTelemetry$win32kbase.sys", 0x18c3dc, 0x0, true, 0x53ccc11b94379c24)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Update@PalmTelemetry$win32kbase.sys", 0x18bd3c, 0x0, true, 0x38387b45f4d9ff7d)
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