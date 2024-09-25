#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z$win32kbase.sys", 0x30170, 0x0, true, 0x45a73818da022e38)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SPRITELOCK@@QEAA@XZ$win32kbase.sys", 0x8fed0, 0x0, true, 0x160f12dd8c55f8f4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif