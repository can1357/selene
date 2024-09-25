#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP$dxgkrnl.sys", 0x231660, 0x0, true, 0x866c246b330f5ab1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP$dxgkrnl.sys", 0x2320a0, 0x0, true, 0xdf39e6a6890d94ea)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_GPUP$dxgkrnl.sys", 0x2322e0, 0x0, true, 0xbd7ee5201b80706b)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SaveKsrState@DXGVIRTUALGPUMANAGER_GPUP$dxgkrnl.sys", 0x232530, 0x0, true, 0xdb720ea4160567dc)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif