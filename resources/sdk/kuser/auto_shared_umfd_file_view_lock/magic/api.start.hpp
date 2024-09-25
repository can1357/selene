#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0AutoSharedUmfdFileViewLock@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x2dfe956dcc89c069)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1AutoSharedUmfdFileViewLock@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0x53d9dab4fa355f56)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif