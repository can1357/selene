#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0ECLIPOBJ@@QEAA@XZ$win32kfull.sys", 0x15692c, 0x0, true, 0xcb0aeb7a5cfd276)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z$win32kfull.sys", 0x156cdc, 0x0, true, 0x7233d3de1ed51fab)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif