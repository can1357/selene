#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1XLATEMEMOBJ@@QEAA@XZ$win32kfull.sys", 0x0, 0x0, false, 0xbc501f5837567e38)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z$win32kfull.sys", 0x2bee0c, 0x0, true, 0x945f3271fc02545a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif