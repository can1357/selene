#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z$win32kfull.sys", 0x105e54, 0x0, true, 0x2c8ec8d09c1d22d1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CAutoPushLockSh@@QEAA@XZ$win32kfull.sys", 0x1d8be4, 0x0, true, 0x96cfbc286d3e538f)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif