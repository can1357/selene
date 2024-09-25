#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetGpuFence@CCompositionBuffer$win32kbase.sys", 0x0, 0x0, false, 0x294cb7709a0f4002)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ImmediateSignalGpuFence@CCompositionBuffer$win32kbase.sys", 0x0, 0x0, false, 0xe4919eebbef748fd)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RemoveAllRealizations@CCompositionBuffer$win32kbase.sys", 0x0, 0x0, false, 0x4bfeb4ad93f3c1aa)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetHDR10MetaData@CCompositionBuffer$win32kbase.sys", 0x0, 0x0, false, 0xc16fc373f9536ef6)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif