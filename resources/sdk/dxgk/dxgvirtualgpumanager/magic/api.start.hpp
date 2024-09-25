#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReportState@DXGVIRTUALGPUMANAGER$dxgkrnl.sys", 0x0, 0x0, false, 0x4caf4833d97c28ec)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER$dxgkrnl.sys", 0x3d5fc, 0x0, true, 0xa72aa73bde98d1ac)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER$dxgkrnl.sys", 0x22a904, 0x0, true, 0x2b56e9fdbbdf808f)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER$dxgkrnl.sys", 0x22a9b0, 0x0, true, 0xab6775ae5404c5cd)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER$dxgkrnl.sys", 0x22ab10, 0x0, true, 0x9afc9cc94680d44c)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetTargetPartitionId@DXGVIRTUALGPUMANAGER$dxgkrnl.sys", 0x22b108, 0x0, true, 0x11dc590843fa863)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER$dxgkrnl.sys", 0x22b4f8, 0x0, true, 0xae5e48eefeff27c5)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif