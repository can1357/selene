#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1LFONTOBJ@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x68f77b35116e5f52)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z$win32kfull.sys", 0x67e9c, 0x0, true, 0x3f3d63de7cfeee70)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ppfeMapFont@LFONTOBJ$win32kfull.sys", 0x65720, 0x0, true, 0xd214140c02a073cd)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif