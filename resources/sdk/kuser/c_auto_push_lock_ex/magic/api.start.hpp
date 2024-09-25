#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CAutoPushLockEx@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x8beeba1737b1c2e7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z$win32kfull.sys", 0x327fc, 0x0, true, 0xc027261ffd6cf0de)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif