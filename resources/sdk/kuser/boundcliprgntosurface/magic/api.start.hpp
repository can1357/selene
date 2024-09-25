#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x47b1d9ec20c1151)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z$win32kfull.sys", 0x1399d8, 0x0, true, 0xcd3f60909eda6e61)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif