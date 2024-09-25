#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1EPALOBJ@@QEAA@XZ$win32kfull.sys", 0x156908, 0x0, true, 0xdef38ca3f43204c5)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z$win32kfull.sys", 0x10bcc, 0x0, true, 0xb5c9f6d27ed7c86b)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif