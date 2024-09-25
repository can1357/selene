#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1RESETFCOBJ@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x2e1ae7cee4d67730)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z$win32kfull.sys", 0xf53fc, 0x0, true, 0x158632bb2e2e99d1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif