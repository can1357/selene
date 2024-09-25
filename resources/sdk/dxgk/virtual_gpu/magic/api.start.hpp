#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyVirtualGpu@DXGK_VIRTUAL_GPU$dxgkrnl.sys", 0x0, 0x0, false, 0x58c45229b71ed882)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportState@DXGK_VIRTUAL_GPU$dxgkrnl.sys", 0x0, 0x0, false, 0x1058480ccc15dbe6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z$dxgkrnl.sys", 0x22a050, 0x0, true, 0xb26de30a917c087e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetBackingResource@DXGK_VIRTUAL_GPU$dxgkrnl.sys", 0x1adb0, 0x0, true, 0xd5b6dab522a14e41)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMmioRangeCount@DXGK_VIRTUAL_GPU$dxgkrnl.sys", 0x1adb0, 0x0, true, 0x41f69a4c6f0e9a45)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetMmioRanges@DXGK_VIRTUAL_GPU$dxgkrnl.sys", 0x1adb0, 0x0, true, 0xcf3f8ad1b262aaad)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif