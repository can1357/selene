#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1DXGK_GAMMA_RAMP@@UEAA@XZ$dxgkrnl.sys", 0x0, 0x0, false, 0x3d3e145a7d457544)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0DXGK_GAMMA_RAMP@@QEAA@XZ$dxgkrnl.sys", 0xa5e8, 0x0, true, 0xc468ea12b2a3e5ad)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@DXGK_GAMMA_RAMP$dxgkrnl.sys", 0xab34, 0x0, true, 0x9fc0b9b4bc07ce4a)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsDefaultGammaRamp@DXGK_GAMMA_RAMP$dxgkrnl.sys", 0x12b858, 0x0, true, 0x8560da8c547db700)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif