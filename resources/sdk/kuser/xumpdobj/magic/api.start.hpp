#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0XUMPDOBJ@@QEAA@XZ$win32kfull.sys", 0x19efc, 0x0, true, 0xe44a0008a8a2f6ec)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1XUMPDOBJ@@QEAA@XZ$win32kfull.sys", 0x19960, 0x0, true, 0xbbdacb0a946e19a6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif