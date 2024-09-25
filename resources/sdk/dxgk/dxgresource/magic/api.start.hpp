#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z$dxgkrnl.sys", 0x147888, 0x0, true, 0x8068a0be57db21b2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGRESOURCE@@QEAA@XZ$dxgkrnl.sys", 0x117150, 0x0, true, 0xf0edbdcd7c5186b5)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif