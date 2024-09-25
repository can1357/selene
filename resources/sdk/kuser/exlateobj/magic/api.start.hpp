#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bSearchCache@EXLATEOBJ$win32kfull.sys", 0x0, 0x0, false, 0xc2348cb642e7c3b4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1EXLATEOBJ@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0xb3d20f4f4d767b06)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bInitXlateObj@EXLATEOBJ$win32kfull.sys", 0x99b70, 0x0, true, 0x56000faea1dbdb67)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bMakeXlate@EXLATEOBJ$win32kfull.sys", 0x2bf0d8, 0x0, true, 0xaeb6a21c191387ab)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vAddToCache@EXLATEOBJ$win32kfull.sys", 0xe3710, 0x0, true, 0xbd302eb828290b2b)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vAltUnlock@EXLATEOBJ$win32kfull.sys", 0x431a0, 0x0, true, 0x6dde8d2937cbb8b6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif