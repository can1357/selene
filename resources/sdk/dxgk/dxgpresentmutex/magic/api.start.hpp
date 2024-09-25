#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPRESENTMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x1b7c8, 0x0, true, 0x40dac7bcb75db9f9)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Acquire@DXGPRESENTMUTEX$dxgkrnl.sys", 0x170c4, 0x0, true, 0x4a783d2abef6d415)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z$dxgkrnl.sys", 0x170f8, 0x0, true, 0x30a302f9129d3fd8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGPRESENTMUTEX$dxgkrnl.sys", 0x16fe4, 0x0, true, 0x3e9b50b8965ba66)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif