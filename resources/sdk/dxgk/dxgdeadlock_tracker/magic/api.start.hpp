#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Activate@DXGDEADLOCK_TRACKER$dxgkrnl.sys", 0x0, 0x0, false, 0x959e055964815e37)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z$dxgkrnl.sys", 0x0, 0x0, false, 0xc78d133cd8637b94)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGDEADLOCK_TRACKER@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0x4ec32541c69c81e8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@@Z$dxgkrnl.sys", 0x14fa50, 0x0, true, 0x1b611c3b42bfcb45)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Cancel@DXGDEADLOCK_TRACKER$dxgkrnl.sys", 0x14fbb0, 0x0, true, 0x7447d1105450d40f)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeadlockCounter@DXGDEADLOCK_TRACKER$dxgkrnl.sys", 0xb0138, 0x0, true, 0xaac02c7efdbdd592)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif