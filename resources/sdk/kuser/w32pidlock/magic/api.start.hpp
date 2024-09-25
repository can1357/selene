#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLockSimple@W32PIDLOCK$win32kbase.sys", 0x0, 0x0, false, 0x5e89510434e618e6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$bIsLocked@W32PIDLOCK$win32kbase.sys", 0x14e130, 0x0, true, 0x11ac67b84ccffca1)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vCleanUp@W32PIDLOCK$win32kbase.sys", 0xaeacc, 0x0, true, 0x3808d28aabacd1e8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vInit@W32PIDLOCK$win32kbase.sys", 0xa9820, 0x0, true, 0x96d1ad6b08df35f4)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLockSingleThread@W32PIDLOCK$win32kbase.sys", 0x8d070, 0x0, true, 0xdc4ab0ab14ca7858)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlockSimple@W32PIDLOCK$win32kbase.sys", 0x8e274, 0x0, true, 0x1af40092b48f0b72)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlockSingleThread@W32PIDLOCK$win32kbase.sys", 0x8d440, 0x0, true, 0xe3ee0a159da77a0b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif