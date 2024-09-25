#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0RFONTTMPOBJ@@QEAA@XZ$win32kfull.sys", 0x12a200, 0x0, true, 0x34429f2fb30f5c0c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z$win32kfull.sys", 0x156a78, 0x0, true, 0xfc6caad358ceb64e)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1RFONTTMPOBJ@@QEAA@XZ$win32kfull.sys", 0xf4e0c, 0x0, true, 0xd57e820da4eb9443)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif