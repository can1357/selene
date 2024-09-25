#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bValid@CHMRefHwndByHandle$win32kbase.sys", 0x8c3b0, 0x0, true, 0x6e8daea3f65acce1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z$win32kbase.sys", 0x70d50, 0x0, true, 0x6b0cb9bfc0d2c6fd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CHMRefHwndByHandle@@QEAA@XZ$win32kbase.sys", 0x2a660, 0x0, true, 0xce4789f86b823073)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$rpwnd@CHMRefHwndByHandle$win32kbase.sys", 0x8dd80, 0x0, true, 0xb093f6b75bca59a4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif