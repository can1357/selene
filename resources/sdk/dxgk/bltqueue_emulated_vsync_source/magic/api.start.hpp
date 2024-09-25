#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z$dxgkrnl.sys", 0x157008, 0x0, true, 0x49152c95347e0115)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAA@XZ$dxgkrnl.sys", 0x2fb944, 0x0, true, 0x1c4cb8fa95a83b92)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetThreadPriority@BLTQUEUE_EMULATED_VSYNC_SOURCE$dxgkrnl.sys", 0x158290, 0x0, true, 0x9db8ee4a9741e3bb)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetWaitableTdrEvent@BLTQUEUE_EMULATED_VSYNC_SOURCE$dxgkrnl.sys", 0x159230, 0x0, true, 0xbd605d0a2f11853c)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetWaitableVSyncEvent@BLTQUEUE_EMULATED_VSYNC_SOURCE$dxgkrnl.sys", 0x159240, 0x0, true, 0xc1bc8d4254263e42)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE$dxgkrnl.sys", 0xd5590, 0x0, true, 0x336277c97ed3671a)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE$dxgkrnl.sys", 0xd6370, 0x0, true, 0xae57401c8c760901)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$StopVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE$dxgkrnl.sys", 0x2fb960, 0x0, true, 0x1f2d989d9ea3f5bc)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#endif