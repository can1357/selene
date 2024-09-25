#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsLockValid@CPushLock$win32kfull.sys", 0x12a100, 0x0, true, 0xcae0946de67ec7bd)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireLockExclusive@CPushLock$win32kbase.sys", 0x96240, 0x0, true, 0x358ad676056e28c4)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AcquireLockShared@CPushLock$win32kbase.sys", 0xb6a0, 0x0, true, 0xc9ca6fb155db33e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReleaseLock@CPushLock$win32kfull.sys", 0xff8b0, 0x0, true, 0xaf1fbdacc6fa32ab)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif