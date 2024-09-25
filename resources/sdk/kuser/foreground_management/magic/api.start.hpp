#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ActivationObjectCallout@ForegroundManagement$win32kbase.sys", 0x0, 0x0, false, 0xd8a1d62ef939e229)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CheckProcessForeground@ForegroundManagement$win32kbase.sys", 0x0, 0x0, false, 0xbc75728678580f1c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetForegroundWindow@ForegroundManagement$win32kbase.sys", 0x0, 0x0, false, 0x15a576d680175704)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif