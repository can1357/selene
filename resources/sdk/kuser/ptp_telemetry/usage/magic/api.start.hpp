#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$gTPTelemState@Usage@PTPTelemetry$win32kbase.sys", 0x25ea90, 0x0, true, 0x6ba62b75a6963758)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$gTPTelemTimings@Usage@PTPTelemetry$win32kbase.sys", 0x257cf0, 0x0, true, 0x80cc685f51a42c00)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$gmsLastTelemetrySentTime@Usage@PTPTelemetry$win32kbase.sys", 0x25f4d0, 0x0, true, 0x846103bbf3a59c2d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HandlePTPTelemetry@Usage@PTPTelemetry$win32kbase.sys", 0xd1310, 0x0, true, 0x20832468d4c59026)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnEndSession@Usage@PTPTelemetry$win32kbase.sys", 0x1adec4, 0x0, true, 0x513c13a4a52151f0)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnNewSession@Usage@PTPTelemetry$win32kbase.sys", 0x1ae428, 0x0, true, 0xc566785377e2946e)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetLastAction@Usage@PTPTelemetry$win32kbase.sys", 0x1aef98, 0x0, true, 0xbfaccb323a8b17d1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif