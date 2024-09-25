#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW$dxgmms2.sys", 0x761a8, 0x0, true, 0xcb813578f779b861)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW$dxgmms2.sys", 0x76e14, 0x0, true, 0x7e97363433aea026)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW$dxgmms2.sys", 0x767bc, 0x0, true, 0x6f81ae13f454f599)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif