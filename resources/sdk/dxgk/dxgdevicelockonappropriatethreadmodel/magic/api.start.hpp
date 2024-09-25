#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z$dxgkrnl.sys", 0x4450, 0x0, true, 0x198791e3c2b0c1b8)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ$dxgkrnl.sys", 0x802c, 0x0, true, 0x7264a0991066dddb)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif