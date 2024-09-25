#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetKmdProcessHandle@DXGPROCESS$dxgmms2.sys", 0x0, 0x0, false, 0xc3fc88d4d302b60e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsHighPriorityProcess@DXGPROCESS$dxgmms2.sys", 0x1f00, 0x0, true, 0xeaeeeda56946c994)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif