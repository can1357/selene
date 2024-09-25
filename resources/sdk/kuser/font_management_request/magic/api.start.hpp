#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Hff@FontManagementRequest$win32kfull.sys", 0x7d00, 0x0, true, 0x99e0f689c8249fa3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CaptureUsermodeParameters@FontManagementRequest$win32kfull.sys", 0x2de690, 0x0, true, 0x3093f094a632b3a7)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateUsermodeParameters@FontManagementRequest$win32kfull.sys", 0x2dea10, 0x0, true, 0xfc6e57768d8b38a7)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetDrvType@FontManagementRequest$win32kfull.sys", 0x2de1a0, 0x0, true, 0x44afd472e06f7cf4)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Zombied@FontManagementRequest$win32kfull.sys", 0x12a660, 0x0, true, 0x296fd7690547d939)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif