#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z$dxgkrnl.sys", 0x243a8, 0x0, true, 0x5f55b2d3d4071bf8)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGOVERLAYMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x6964, 0x0, true, 0x9d9c64c277fe9f5c)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif