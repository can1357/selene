#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0PATHSTACKOBJ@@QEAA@XZ$win32kfull.sys", 0x1349e8, 0x0, true, 0x40b176291a9a40d9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z$win32kfull.sys", 0x1359ec, 0x0, true, 0x8d41f5e4e1af1528)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1PATHSTACKOBJ@@QEAA@XZ$win32kfull.sys", 0x135654, 0x0, true, 0xe8e12cbf544d4e40)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif