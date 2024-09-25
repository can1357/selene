#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z$dxgkrnl.sys", 0x0, 0x0, false, 0x81b8fccebe498e57)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ$dxgkrnl.sys", 0x1aa04, 0x0, true, 0x417ab88bf580a3ca)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Acquire@DXGADAPTERSTOPRESETLOCKSHARED$dxgkrnl.sys", 0x6bc0, 0x0, true, 0x55607f684e21d998)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGADAPTERSTOPRESETLOCKSHARED$dxgkrnl.sys", 0x6c1c, 0x0, true, 0xbb1f62e2781c4311)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif