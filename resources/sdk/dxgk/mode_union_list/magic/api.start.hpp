#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindMode@MODE_UNION_LIST$dxgkrnl.sys", 0x0, 0x0, false, 0xb4fce9f92eff5dc7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddUniqueMode@MODE_UNION_LIST$dxgkrnl.sys", 0xd4618, 0x0, true, 0x638c66db378c7fe6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveMode@MODE_UNION_LIST$dxgkrnl.sys", 0x258a7c, 0x0, true, 0x122315654689fc59)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SearchIndexdModeList@MODE_UNION_LIST$dxgkrnl.sys", 0xd4674, 0x0, true, 0xd6f6fb6dbb706fc7)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddMode@MODE_UNION_LIST$dxgkrnl.sys", 0x122754, 0x0, true, 0xa49b236f5d0a67e0)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetUniqueModes@MODE_UNION_LIST$dxgkrnl.sys", 0x14f9a8, 0x0, true, 0x3eacdd45e30e3bc5)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif