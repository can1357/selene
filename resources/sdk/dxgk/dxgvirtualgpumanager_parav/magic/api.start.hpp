#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV$dxgkrnl.sys", 0x2305a0, 0x0, true, 0xb3b815c6981c12e4)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV$dxgkrnl.sys", 0x230980, 0x0, true, 0x96908568b6c6a27)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_PARAV$dxgkrnl.sys", 0x230a80, 0x0, true, 0x4ce573a11da6cda7)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SaveKsrState@DXGVIRTUALGPUMANAGER_PARAV$dxgkrnl.sys", 0x158e20, 0x0, true, 0x5a47c6fccf13e476)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif