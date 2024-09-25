#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Hff@QueryFontRequest$win32kfull.sys", 0x12a630, 0x0, true, 0xebca1f9a0a18f085)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CaptureUsermodeParameters@QueryFontRequest$win32kfull.sys", 0xdff80, 0x0, true, 0xca4cca2aaea11db)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateUsermodeParameters@QueryFontRequest$win32kfull.sys", 0x3c3d0, 0x0, true, 0xeba528903e36365b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDrvType@QueryFontRequest$win32kfull.sys", 0x12a5e0, 0x0, true, 0xadeb98deff44f7a8)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Zombied@QueryFontRequest$win32kfull.sys", 0x12a6c0, 0x0, true, 0x8e9143830ae97c8a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif