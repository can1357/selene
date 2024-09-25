#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1HmgInsertObjectHelper@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0xd7e7c192027e14a3)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Insert@HmgInsertObjectHelper$win32kfull.sys", 0x72aac, 0x0, true, 0xac2278bbabd7dd90)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif