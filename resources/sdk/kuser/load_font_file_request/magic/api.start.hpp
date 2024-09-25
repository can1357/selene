#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Hff@LoadFontFileRequest$win32kfull.sys", 0x7d00, 0x0, true, 0xe73a01e2c8a5bcb1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CaptureUsermodeParameters@LoadFontFileRequest$win32kfull.sys", 0x110740, 0x0, true, 0x9ef0b688360afd49)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateUsermodeParameters@LoadFontFileRequest$win32kfull.sys", 0x3c130, 0x0, true, 0xdfef2a6bfc229156)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDrvType@LoadFontFileRequest$win32kfull.sys", 0x12a590, 0x0, true, 0x6bbe019763d389fe)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Zombied@LoadFontFileRequest$win32kfull.sys", 0x12a660, 0x0, true, 0x478dc5af7efd897f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif