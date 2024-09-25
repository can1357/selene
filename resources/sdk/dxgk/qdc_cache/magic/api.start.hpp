#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FreeAllocationsForEntry@QDC_CACHE$dxgkrnl.sys", 0x0, 0x0, false, 0x19885eb1be95217)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCahcedBufferSizes@QDC_CACHE$dxgkrnl.sys", 0x0, 0x0, false, 0x2a3ce3ee481f1145)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CompareEntry@QDC_CACHE$dxgkrnl.sys", 0x28fe9c, 0x0, true, 0x191c050ed4606aa1)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0QDC_CACHE@@QEAA@_N@Z$dxgkrnl.sys", 0x17b754, 0x0, true, 0x9a6b57fda03b7a8e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCachedBufferSizes@QDC_CACHE$dxgkrnl.sys", 0xe1ba8, 0x0, true, 0x8b31d8118f2061d1)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InvalidateCache@QDC_CACHE$dxgkrnl.sys", 0x12f17c, 0x0, true, 0x7c5174a678be5705)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddToCache@QDC_CACHE$dxgkrnl.sys", 0xe1338, 0x0, true, 0x864eb4d7027545bd)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1QDC_CACHE@@QEAA@XZ$dxgkrnl.sys", 0x28fe44, 0x0, true, 0x9c299a9bb1999416)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindCacheEntry@QDC_CACHE$dxgkrnl.sys", 0xe14a8, 0x0, true, 0xa310542c2e509e90)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetCachedData@QDC_CACHE$dxgkrnl.sys", 0xe1d58, 0x0, true, 0x918c5e51f971161f)
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
#define _m9(...) __VA_ARGS__
#endif