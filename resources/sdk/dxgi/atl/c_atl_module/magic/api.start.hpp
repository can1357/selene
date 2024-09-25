#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetGITPtr@CAtlModule@ATL$dxgi.dll", 0x5a720, 0x0, true, 0x31ea8cfd6e629696)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetLockCount@CAtlModule@ATL$dxgi.dll", 0x1fd50, 0x0, true, 0xcfd28482b6eb1d62)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Lock@CAtlModule@ATL$dxgi.dll", 0x1fd60, 0x0, true, 0xc2b7a4837c228d28)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Unlock@CAtlModule@ATL$dxgi.dll", 0x1fd90, 0x0, true, 0x63442e0d95101682)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif