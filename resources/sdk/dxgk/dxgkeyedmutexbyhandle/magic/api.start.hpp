#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0xc54090c3102c377)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z$dxgkrnl.sys", 0x46560, 0x0, true, 0x7cb3ded8f2324f6d)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif