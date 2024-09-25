#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLock@SINGLEREADERLOCK$win32kfull.sys", 0x28280c, 0x0, true, 0x10d9cd94590ad0e9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlock@SINGLEREADERLOCK$win32kfull.sys", 0x2858d8, 0x0, true, 0x45701746485d83db)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif