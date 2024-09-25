#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bExpand@STACKOBJ$win32kfull.sys", 0x2b8990, 0x0, true, 0xa5f255e48a3bb19c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bExpandScanline@STACKOBJ$win32kfull.sys", 0x2b8a48, 0x0, true, 0xd8a0a7b935e2e479)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bPushMergeScrScan@STACKOBJ$win32kfull.sys", 0x2b907c, 0x0, true, 0x64e5f3666a93eed1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif