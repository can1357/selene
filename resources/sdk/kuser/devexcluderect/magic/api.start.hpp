#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DEVEXCLUDERECT@@QEAA@XZ$win32kfull.sys", 0x27bb38, 0x0, true, 0xc99962a5a7bb8c97)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vExclude@DEVEXCLUDERECT$win32kfull.sys", 0x27ca98, 0x0, true, 0x2bc1a99bfaaeb032)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif