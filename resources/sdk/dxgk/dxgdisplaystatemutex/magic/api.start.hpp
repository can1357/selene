#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z$dxgkrnl.sys", 0x241d8, 0x0, true, 0xa13d17a4ef7c83a6)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGDISPLAYSTATEMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x6964, 0x0, true, 0xff9cb4530aacb3a9)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif