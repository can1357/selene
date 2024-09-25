#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetAdapterLuidAndGpuSync@CompositionSurfaceObject$win32kbase.sys", 0x0, 0x0, false, 0x3b19f47f482d6e6c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$HasActiveBinding@CompositionSurfaceObject$win32kbase.sys", 0x0, 0x0, false, 0x63e077672ee1130d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ImmediateSignalGpuFence@CompositionSurfaceObject$win32kbase.sys", 0x0, 0x0, false, 0x13f69bc9ced191f1)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$NotifyOfRedirectionStop@CompositionSurfaceObject$win32kbase.sys", 0x0, 0x0, false, 0x61231100e1076926)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif