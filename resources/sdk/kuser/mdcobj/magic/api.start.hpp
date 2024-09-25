#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MDCOBJ@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0xb8c9d42d072900d7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MDCOBJ@@QEAA@PEAUHDC__@@@Z$win32kfull.sys", 0x2b7044, 0x0, true, 0x84990e95b7772f4a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif