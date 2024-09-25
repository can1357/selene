#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z$win32kfull.sys", 0x152c30, 0x0, true, 0x8e89143465d3560d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1SEMOBJEX@@QEAA@XZ$win32kfull.sys", 0x152b54, 0x0, true, 0x3803c83d7c66293c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif