#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Hff@FreeRequest$win32kfull.sys", 0x7d00, 0x0, true, 0x9666835736b6866)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CaptureUsermodeParameters@FreeRequest$win32kfull.sys", 0x12a110, 0x0, true, 0xc0a84583ac2d919c)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateUsermodeParameters@FreeRequest$win32kfull.sys", 0x2deb90, 0x0, true, 0x116bc81edb5e191b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDrvType@FreeRequest$win32kfull.sys", 0x12a570, 0x0, true, 0xf020c077abb0819b)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Zombied@FreeRequest$win32kfull.sys", 0x12a660, 0x0, true, 0xe708060ca931cc2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif