#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindAvailableFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE$dxgmms2.sys", 0x0, 0x0, false, 0x3446d30e25d25dad)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE$dxgmms2.sys", 0x12158, 0x0, true, 0x2f684d4c9befaed)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE$dxgmms2.sys", 0x15470, 0x0, true, 0x32d1ab9422e21cdb)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z$dxgmms2.sys", 0x758e0, 0x0, true, 0xeb62dfd9b81cdca0)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ$dxgmms2.sys", 0x75a24, 0x0, true, 0xae5f6e5af07640dd)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE$dxgmms2.sys", 0x14034, 0x0, true, 0xc5536e12a0c3e6b0)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE$dxgmms2.sys", 0x15548, 0x0, true, 0x7b33078cd7a7031b)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_GlobalFenceStorage@VIDMM_PROCESS_FENCE_STORAGE$dxgmms2.sys", 0x51548, 0x0, true, 0xd4ec3c14b6e73ac6)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE$dxgmms2.sys", 0x8e33c, 0x0, true, 0xa7b873504151eadf)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#endif