#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vLock@SURFREFDC$win32kfull.sys", 0x0, 0x0, false, 0x7c171c62f7596184)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vUnlock@SURFREFDC$win32kfull.sys", 0x0, 0x0, false, 0x4d3c52ee38436272)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif