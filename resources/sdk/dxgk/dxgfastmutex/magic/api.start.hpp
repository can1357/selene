#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z$dxgkrnl.sys", 0xace4, 0x0, true, 0x5813ed1c2632c85e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Acquire@DXGFASTMUTEX$dxgkrnl.sys", 0x6730, 0x0, true, 0xec3a5bc7d1f153e0)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGFASTMUTEX@@QEAA@XZ$dxgkrnl.sys", 0x68c0, 0x0, true, 0x3a4eebe6e3651260)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Release@DXGFASTMUTEX$dxgkrnl.sys", 0x67f0, 0x0, true, 0x5933d27ab4b96da5)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif