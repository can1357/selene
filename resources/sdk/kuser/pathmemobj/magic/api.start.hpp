#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0PATHMEMOBJ@@QEAA@XZ$win32kbase.sys", 0x45420, 0x0, true, 0xd8f11ef50229d91f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1PATHMEMOBJ@@QEAA@XZ$win32kbase.sys", 0x8f380, 0x0, true, 0x6bbf1b3d9eb14b3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif