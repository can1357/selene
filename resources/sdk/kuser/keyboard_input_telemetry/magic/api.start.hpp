#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry$win32kbase.sys", 0x0, 0x0, false, 0x60369f20dcb1582e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry$win32kbase.sys", 0x1820, 0x0, true, 0xf9f9554c2e67caaa)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry$win32kbase.sys", 0x1660, 0x0, true, 0x3be718596f63645d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetKeyboardInputLatency@KeyboardInputTelemetry$win32kbase.sys", 0x17e8, 0x0, true, 0xff17157460620905)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LogHanging@KeyboardInputTelemetry$win32kbase.sys", 0x14b238, 0x0, true, 0x19211470f98ef6ba)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_UpdateTelemetryBuffer@KeyboardInputTelemetry$win32kbase.sys", 0x16c8, 0x0, true, 0x81e15ef6077b76b2)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_UploadTelemetryData@KeyboardInputTelemetry$win32kbase.sys", 0x19e0, 0x0, true, 0x605631e1d14e23f9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif