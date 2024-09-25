#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DownlevelInput@PTP@InputTraceLogging$win32kbase.sys", 0x1ad570, 0x0, true, 0x2e4b3757b1de1f96)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EngineInput@PTP@InputTraceLogging$win32kbase.sys", 0x1ad840, 0x0, true, 0x7b81a7f34459d791)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GestureOutput@PTP@InputTraceLogging$win32kbase.sys", 0x1ad93c, 0x0, true, 0x41e19349c0f1679d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MouseOutput@PTP@InputTraceLogging$win32kbase.sys", 0x1add74, 0x0, true, 0x188e5be280e60cca)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif