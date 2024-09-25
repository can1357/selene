#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateInstance@CMouseSensor$win32kbase.sys", 0x0, 0x0, false, 0x2adeaac4b60a55c6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CMouseSensor@@IEAA@XZ$win32kbase.sys", 0x79630, 0x0, true, 0x787df1cfa094a9b6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$dispatcherObjects@CMouseSensor$win32kbase.sys", 0x216548, 0x0, true, 0x11e83df00b3fe8e9)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FlushMouseReports@CMouseSensor$win32kbase.sys", 0x1b9b68, 0x0, true, 0x1c09c08fe38e20b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCursorUpdateHandle@CMouseSensor$win32kbase.sys", 0x7aef0, 0x0, true, 0xb546c8718eb53763)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDispatchersName@CMouseSensor$win32kbase.sys", 0xc0d50, 0x0, true, 0x4fa080d4516545da)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetProcessor@CMouseSensor$win32kbase.sys", 0xc8560, 0x0, true, 0x810098450a73aa1f)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnMouseCursorUpdateNotification@CMouseSensor$win32kbase.sys", 0x58c70, 0x0, true, 0xcf239824bf3c9b31)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OnMouseReportRateLimitingTimerNotification@CMouseSensor$win32kbase.sys", 0x1b9dc0, 0x0, true, 0xbc6c89f08a6fba0a)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PostInitialize@CMouseSensor$win32kbase.sys", 0x7a950, 0x0, true, 0x3f80388cb7faf20c)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PreUninitialize@CMouseSensor$win32kbase.sys", 0x79b30, 0x0, true, 0x408a40dec15fc411)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProcessInput@CMouseSensor$win32kbase.sys", 0x1b9df0, 0x0, true, 0xfc7d1c9f052d5d43)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProcessInputWithRateLimitingIfEnabled@CMouseSensor$win32kbase.sys", 0x1b9e60, 0x0, true, 0x1fdd45867c4c0f61)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetInputRateLimitingTime@CMouseSensor$win32kbase.sys", 0x7d05c, 0x0, true, 0x242e80aa9eb96acb)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#endif