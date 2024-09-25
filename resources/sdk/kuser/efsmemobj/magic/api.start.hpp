#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z$win32kfull.sys", 0x396e4, 0x0, true, 0x6efc25f7f0824ef)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1EFSMEMOBJ@@QEAA@XZ$win32kfull.sys", 0x3969c, 0x0, true, 0x55cbc04f659c9e1c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif