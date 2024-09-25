#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z$dxgkrnl.sys", 0x0, 0x0, false, 0xcd65307fa25e9e19)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MUTEX_LOCK@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0x613e243353f88e55)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif