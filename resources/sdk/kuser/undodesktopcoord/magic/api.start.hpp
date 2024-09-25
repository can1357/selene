#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z$win32kfull.sys", 0x27e2f4, 0x0, true, 0x169f1e0205154e2f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1UNDODESKTOPCOORD@@QEAA@XZ$win32kfull.sys", 0x27e410, 0x0, true, 0x6b4e92b67bc0b94)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif