#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR$dxgkrnl.sys", 0x126c5c, 0x0, true, 0x31ec42fd7df4987b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR$dxgkrnl.sys", 0x12714c, 0x0, true, 0xfd13ee37db2f9b04)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR$dxgkrnl.sys", 0x127130, 0x0, true, 0x73a3ad2e0314bec0)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR$dxgkrnl.sys", 0x1363f0, 0x0, true, 0xe63ba4819d3f1db6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif