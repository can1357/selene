#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z$win32kbase.sys", 0x55c04, 0x0, true, 0xaa3ea037cc8f43e3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1RIMDropAndReAcquireSyncLock@@QEAA@XZ$win32kbase.sys", 0x560a0, 0x0, true, 0x3c2451c889f9548)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif