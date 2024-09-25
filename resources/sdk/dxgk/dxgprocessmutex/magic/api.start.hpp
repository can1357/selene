#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z$dxgkrnl.sys", 0x24e7c, 0x0, true, 0x62e3bde9ef723019)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPROCESSMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x6964, 0x0, true, 0xbca5b22ff9ff5c53)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif