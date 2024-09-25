#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0VIDMM_PHYSICAL_ADAPTER@@QEAA@XZ$dxgmms2.sys", 0x14750, 0x0, true, 0xf70ecbda9914dd5c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1VIDMM_PHYSICAL_ADAPTER@@QEAA@XZ$dxgmms2.sys", 0x145b0, 0x0, true, 0x7117c733684b7ce8)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER$dxgmms2.sys", 0xb17c4, 0x0, true, 0x5ed98ffccf3f6f9a)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif