#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z$win32kfull.sys", 0x7e66c, 0x0, true, 0x80582045ce3e60dc)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SEMOBJEXORSHARED@@QEAA@XZ$win32kfull.sys", 0x474f8, 0x0, true, 0x3eeb4696f9a45478)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif