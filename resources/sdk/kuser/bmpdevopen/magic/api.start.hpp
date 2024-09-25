#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1BMPDEVOPEN@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0xf98679a816f1714c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z$win32kfull.sys", 0x299298, 0x0, true, 0x58a3dde9e363b2bd)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif