#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z$dxgkrnl.sys", 0x243f8, 0x0, true, 0x431718a3c2f85950)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ$dxgkrnl.sys", 0x244c4, 0x0, true, 0xcf830e1e882afe31)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGPAIREDADAPTERSTOPRESETLOCKSHARED$dxgkrnl.sys", 0x24530, 0x0, true, 0xbc3bae11f18f1a14)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif