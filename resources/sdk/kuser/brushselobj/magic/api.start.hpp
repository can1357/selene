#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z$win32kfull.sys", 0xfad90, 0x0, true, 0x8469cd0d77d54df7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1BRUSHSELOBJ@@QEAA@XZ$win32kfull.sys", 0xfad10, 0x0, true, 0x5ee249b8f63009f0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vDecShareRefCntLazy0@BRUSHSELOBJ$win32kfull.sys", 0x137410, 0x0, true, 0x4a1267367b0355ea)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif