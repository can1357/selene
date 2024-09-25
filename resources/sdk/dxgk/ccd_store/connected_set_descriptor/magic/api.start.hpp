#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE$dxgkrnl.sys", 0xe3a9c, 0x0, true, 0x23219585ac4deb7a)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE$dxgkrnl.sys", 0xe3b2c, 0x0, true, 0x243ae844a4277ddd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE$dxgkrnl.sys", 0xe0d60, 0x0, true, 0x5e38d88c7dbc4706)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE$dxgkrnl.sys", 0x1383c4, 0x0, true, 0x8b42ae6002782eab)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif