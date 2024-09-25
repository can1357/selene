#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL$dxgkrnl.sys", 0x75ef8, 0x0, true, 0xebc2af790756234d)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DXGKMDT_OPM_GET_CONNECTOR_TYPE$dxgkrnl.sys", 0x75ee8, 0x0, true, 0x797236f22b441285)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES$dxgkrnl.sys", 0x75f08, 0x0, true, 0x77a49883946ef128)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DXGKMDT_OPM_SET_PROTECTION_LEVEL$dxgkrnl.sys", 0x7fb78, 0x0, true, 0x906c6437128a28dd)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif