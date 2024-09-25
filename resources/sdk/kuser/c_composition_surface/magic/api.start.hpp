#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetAdapterLuidAndGpuSync@CCompositionSurface$win32kbase.sys", 0x0, 0x0, false, 0xeb4f2d6d078476cf)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyBuffersOfDwmTermination@CCompositionSurface$win32kbase.sys", 0x0, 0x0, false, 0xafb67de45d2714ef)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyPendingFlipPresent@CCompositionSurface$win32kbase.sys", 0x0, 0x0, false, 0x72474d4fd42c9f5f)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UpdateStats@CCompositionSurface$win32kbase.sys", 0x0, 0x0, false, 0x27a9cea1ed8b4422)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif