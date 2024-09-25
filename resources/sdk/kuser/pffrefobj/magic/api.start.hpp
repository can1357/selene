#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0PFFREFOBJ@@QEAA@XZ$win32kfull.sys", 0x12a200, 0x0, true, 0xa93a0ad980a0cdd9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1PFFREFOBJ@@QEAA@XZ$win32kfull.sys", 0x157eb0, 0x0, true, 0xb34e8c6686566ff3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif