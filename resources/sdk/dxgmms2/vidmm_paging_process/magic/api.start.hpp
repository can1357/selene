#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateVaAllocator@VIDMM_PAGING_PROCESS$dxgmms2.sys", 0xbe090, 0x0, true, 0x7f6b4d476b73b574)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyPagingProcess@VIDMM_PAGING_PROCESS$dxgmms2.sys", 0xbe1e4, 0x0, true, 0xb232532b47e03147)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitPagingProcess@VIDMM_PAGING_PROCESS$dxgmms2.sys", 0x93dd4, 0x0, true, 0x2b237824f5653dd2)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MapScratchAreaVaRange@VIDMM_PAGING_PROCESS$dxgmms2.sys", 0x74074, 0x0, true, 0xef23e84c1f2722c2)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif