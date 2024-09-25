#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OpenEdidRegistryForTarget@EDIDCACHE$dxgkrnl.sys", 0x271234, 0x0, true, 0xcba0526d6a5939d2)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddEdid@EDIDCACHE$dxgkrnl.sys", 0x167ed4, 0x0, true, 0xef209162a3b2a051)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0EDIDCACHE@@QEAA@XZ$dxgkrnl.sys", 0x17b7dc, 0x0, true, 0x2fbfa0826d194279)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1EDIDCACHE@@QEAA@XZ$dxgkrnl.sys", 0x270f40, 0x0, true, 0xbe4ea5ae24b63d98)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindEdidInCache@EDIDCACHE$dxgkrnl.sys", 0x168018, 0x0, true, 0xf87cca2df7651ddb)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetEdidForTarget@EDIDCACHE$dxgkrnl.sys", 0x270f70, 0x0, true, 0xd669113b8842fbaa)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetEdids@EDIDCACHE$dxgkrnl.sys", 0x2710f8, 0x0, true, 0xa21a3993675bd676)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadEdidFromRegistry@EDIDCACHE$dxgkrnl.sys", 0x2713b8, 0x0, true, 0x8cb3b0d1e6fe7653)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetPhysicalDimensionOfInternalPanel@EDIDCACHE$dxgkrnl.sys", 0x17b878, 0x0, true, 0xb9badd2b0f7cc0d7)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteEdidToRegistry@EDIDCACHE$dxgkrnl.sys", 0x27158c, 0x0, true, 0x3120a1a509dd6ab1)
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