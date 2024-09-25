#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bCreateHTPalette@PALMEMOBJ$win32kfull.sys", 0xb2f8, 0x0, true, 0xa69b89384ada3d2a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bCreatePalette@PALMEMOBJ$win32kbase.sys", 0xd38b0, 0x0, true, 0xe39f3f5323d5756a)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1PALMEMOBJ@@QEAA@XZ$win32kbase.sys", 0x851d0, 0x0, true, 0x82bb0af3abc5781d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif