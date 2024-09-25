#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Hff@EscapeRequest$win32kfull.sys", 0x7d00, 0x0, true, 0x88860d1363201806)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CaptureUsermodeParameters@EscapeRequest$win32kfull.sys", 0x2de620, 0x0, true, 0x6d7827b94b1660e0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateUsermodeParameters@EscapeRequest$win32kfull.sys", 0x2de900, 0x0, true, 0x2fe98b18fc0fdd46)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDrvType@EscapeRequest$win32kfull.sys", 0x12a560, 0x0, true, 0xd757989f1624c3c5)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Zombied@EscapeRequest$win32kfull.sys", 0x12a660, 0x0, true, 0x7cb71931cf6c6d8d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif