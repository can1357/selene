#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HFFToPPFF@PFTOBJ$win32kfull.sys", 0x272e64, 0x0, true, 0xcef19d2c7e3d9612)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bUnloadAllButPermanentFonts@PFTOBJ$win32kfull.sys", 0x3bb44, 0x0, true, 0x7bfb834657cb2fec)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bUnloadEUDCFont@PFTOBJ$win32kfull.sys", 0x3b218, 0x0, true, 0x41b3bc910ca4abec)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bUnloadWorkhorse@PFTOBJ$win32kfull.sys", 0x3b45c, 0x0, true, 0x9a5f17f4a798179f)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$chpfeIncrPFF@PFTOBJ$win32kfull.sys", 0x3b338, 0x0, true, 0x370009aecdda70e8)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FontChangeTime@PFTOBJ$win32kfull.sys", 0x33c118, 0x0, true, 0x8ead32cae8ea3c2d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif