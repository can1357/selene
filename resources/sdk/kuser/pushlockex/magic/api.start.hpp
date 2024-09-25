#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z$win32kfull.sys", 0x72c94, 0x0, true, 0x581112e7361a3248)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1PUSHLOCKEX@@QEAA@XZ$win32kfull.sys", 0x72c60, 0x0, true, 0x5bcd830b18c7cf8c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif