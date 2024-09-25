#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetPtiMouse@QHelper$win32kbase.sys", 0x64d60, 0x0, true, 0xdd47cf091d85c109)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetInputDestFromForegroundCapture@QHelper$win32kbase.sys", 0xa9ac8, 0x0, true, 0xf2e365014becda33)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetInputDestFromForegroundFocus@QHelper$win32kbase.sys", 0x1c76ac, 0x0, true, 0xf6d1b42b6ab231b2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetInputMessageSource@QHelper$win32kbase.sys", 0x65a00, 0x0, true, 0xb8897780070826d)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetPendingMouseMovePoint@QHelper$win32kbase.sys", 0xb7eb8, 0x0, true, 0x6dba7cd58bc743b1)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HasPendingMouseMove@QHelper$win32kbase.sys", 0x5dfb0, 0x0, true, 0xf89409afed0d2395)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetMouseMovePoint@QHelper$win32kbase.sys", 0x5f91c, 0x0, true, 0x880c8c2c6a94b1c9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif