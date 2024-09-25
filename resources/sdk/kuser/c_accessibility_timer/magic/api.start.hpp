#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ExecuteTimer@CAccessibilityTimer$win32kbase.sys", 0x1b0020, 0x0, true, 0x31ef22f1adcb96c1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ForwardInputToISMTimers@CAccessibilityTimer$win32kbase.sys", 0x1b00e4, 0x0, true, 0x693116947e4100bd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetTimerId@CAccessibilityTimer$win32kbase.sys", 0x1b012c, 0x0, true, 0xae3b5c1426bc3ef)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$KillTimer@CAccessibilityTimer$win32kbase.sys", 0x1b01e0, 0x0, true, 0x7c7fed3624d11308)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetTimer@CAccessibilityTimer$win32kbase.sys", 0x1b0230, 0x0, true, 0xa929cd85e3ce36)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_timersState@CAccessibilityTimer$win32kbase.sys", 0x25f4d8, 0x0, true, 0x70f62dbf01ae45a4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif