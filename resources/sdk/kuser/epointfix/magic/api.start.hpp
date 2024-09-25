#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0EPOINTFIX@@QEAA@XZ$win32kfull.sys", 0x12a340, 0x0, true, 0xac59435972ac964e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1EPOINTFIX@@QEAA@XZ$win32kfull.sys", 0x12a110, 0x0, true, 0x33d39ab3d5264030)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif