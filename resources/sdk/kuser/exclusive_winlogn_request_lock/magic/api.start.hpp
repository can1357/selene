#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0ExclusiveWinlognRequestLock@@QEAA@XZ$win32kfull.sys", 0x1575c4, 0x0, true, 0xb7ff799390c68a73)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1ExclusiveWinlognRequestLock@@QEAA@XZ$win32kfull.sys", 0x1575ec, 0x0, true, 0xa54d9dde500e69ea)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif