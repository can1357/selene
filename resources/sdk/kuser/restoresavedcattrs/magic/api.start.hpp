#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vInit@RESTORESAVEDCATTRS$win32kfull.sys", 0x129604, 0x0, true, 0x849a0a1ca470ab2c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1RESTORESAVEDCATTRS@@QEAA@XZ$win32kfull.sys", 0x129868, 0x0, true, 0xa10acc67209b2b32)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$vDone@RESTORESAVEDCATTRS$win32kfull.sys", 0x1404cc, 0x0, true, 0xf928d8d6be48656a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif