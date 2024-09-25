#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AddEdid@EDIDCACHE@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x3f618d1650ccdf70)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DeleteGlobalCache@EDIDCACHE@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x6ffecc74fca79d05)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetEdidForTarget@EDIDCACHE@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x60ea3ff766228dfc)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetEdids@EDIDCACHE@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x5495610404d7cf02)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeGlobalCache@EDIDCACHE@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x51a0be2da1f3f6d6)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$OpenEdidRegistryForTarget@EDIDCACHE@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0xd03c5a8e215ff343)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReadEdidFromRegistry@EDIDCACHE@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0xdc0a05806ec97cb)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$s_pEdidCache@EDIDCACHE@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x3b3d702024961b7)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetPhysicalDimensionOfInternalPanel@EDIDCACHE@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x6c414a280b00b3fe)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WriteEdidToRegistry@EDIDCACHE@DxgMonitor$dxgkrnl.sys", 0x0, 0x0, false, 0x92232f8d306e3c63)
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