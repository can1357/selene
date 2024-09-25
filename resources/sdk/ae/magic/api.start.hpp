#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AE_LOG$dxgi.dll", 0xaf800, 0x0, true, 0x8594c9ab6f8ca9c1)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AE_PCA_DX_SHIM_APPLIED_HIGHDPIAWARE_EVENT$dxgi.dll", 0xaf7f0, 0x0, true, 0x22e3ca5a4c836d3)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AeSbCallEvent$ntdll.dll", 0x124870, 0x0, true, 0xce3b3e336b1cae6d)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AeSbContextUpdateEvent$ntdll.dll", 0x1307c8, 0x0, true, 0x38231de86a67db29)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$AeSbImplEvent$ntdll.dll", 0x124880, 0x0, true, 0xcdbfc8c5bc822520)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#endif