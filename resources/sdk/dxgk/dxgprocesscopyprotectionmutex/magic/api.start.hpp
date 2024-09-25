#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z$dxgkrnl.sys", 0x2445c, 0x0, true, 0xb1e74ee31708f740)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x6964, 0x0, true, 0x68a17c2148e522c8)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif