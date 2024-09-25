#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DCVISRGNSHARELOCK@@QEAA@XZ$win32kfull.sys", 0x128fbc, 0x0, true, 0xa3f2d4bcc6bcd94b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DCVISRGNSHARELOCK@@QEAA@XZ$win32kfull.sys", 0x12932c, 0x0, true, 0x8215ce7677124a53)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif