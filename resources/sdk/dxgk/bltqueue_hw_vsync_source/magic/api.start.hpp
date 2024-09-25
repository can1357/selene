#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0BLTQUEUE_HW_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_KEVENT@@@Z$dxgkrnl.sys", 0x2fb310, 0x0, true, 0x69a1d8a226215b1f)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetWaitableTdrEvent@BLTQUEUE_HW_VSYNC_SOURCE$dxgkrnl.sys", 0x1591f0, 0x0, true, 0x40efefea9475a9dc)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetWaitableVSyncEvent@BLTQUEUE_HW_VSYNC_SOURCE$dxgkrnl.sys", 0x159200, 0x0, true, 0x2f92998ab61b76f8)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ResetTdrTimer@BLTQUEUE_HW_VSYNC_SOURCE$dxgkrnl.sys", 0x2fb390, 0x0, true, 0x5df9b37317150b93)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StartVSync@BLTQUEUE_HW_VSYNC_SOURCE$dxgkrnl.sys", 0x2fb3d0, 0x0, true, 0x36b4f5247a852a64)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StopVSync@BLTQUEUE_HW_VSYNC_SOURCE$dxgkrnl.sys", 0x2fb420, 0x0, true, 0xf273629a09e89383)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#endif