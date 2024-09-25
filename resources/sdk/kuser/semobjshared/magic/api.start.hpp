#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z$win32kfull.sys", 0x47638, 0x0, true, 0xab43703a2c03ed29)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SEMOBJSHARED@@QEAA@XZ$win32kfull.sys", 0x474f8, 0x0, true, 0x1fb030624420dd44)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif