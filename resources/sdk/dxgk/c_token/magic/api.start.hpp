#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CompleteIndependentFlipNotifyToken@CToken$dxgkrnl.sys", 0x0, 0x0, false, 0xbf878a6543c1c96e)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z$dxgkrnl.sys", 0x1b540, 0x0, true, 0x49ba8a13496ea12f)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CreateClonedFlipToken@CToken$dxgkrnl.sys", 0x61978, 0x0, true, 0x222a77d90a419952)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsAnalogExclusive@CToken$dxgkrnl.sys", 0x1b070, 0x0, true, 0x81b056e52066e22e)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsRequirePairedToken@CToken$dxgkrnl.sys", 0x1b070, 0x0, true, 0x914b76d8d116749e)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PresentAllowedTearing@CToken$dxgkrnl.sys", 0x1b070, 0x0, true, 0xc84d3bfb454bfde0)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RequestIndependentFlipExit@CToken$dxgkrnl.sys", 0x1b070, 0x0, true, 0x26dd51e3ec085ed3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#endif