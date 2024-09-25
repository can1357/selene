#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DrvpDisplayConfigGetDisplayDeviceInfo$win32kbase.sys", 0x3dfe4, 0x0, true, 0x350282918fdecae4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DrvpGetDeviceInterfaceName$win32kbase.sys", 0xc1080, 0x0, true, 0xe7f29d4d753a98e3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif