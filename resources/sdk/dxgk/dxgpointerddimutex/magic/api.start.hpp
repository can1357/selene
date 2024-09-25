#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPOINTERDDIMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z$dxgkrnl.sys", 0x0, 0x0, false, 0x1c9dae4926b696ad)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPOINTERDDIMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xc322901e185ea9ce)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif