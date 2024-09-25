#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MDCOBJA@@QEAA@PEAUHDC__@@@Z$win32kfull.sys", 0x0, 0x0, false, 0x2c0f2df8fac8137e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z$win32kfull.sys", 0xd29b0, 0x0, true, 0x104b580718c7a8a0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1MDCOBJA@@QEAA@XZ$win32kfull.sys", 0x156cc0, 0x0, true, 0xf906d6bb681dcf16)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif