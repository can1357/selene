#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetGpuFence@CFlipExBuffer$win32kbase.sys", 0x0, 0x0, false, 0x76d702a4f4a6140c)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ImmediateSignalGpuFence@CFlipExBuffer$win32kbase.sys", 0x0, 0x0, false, 0x203b5284d255c5d)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetHDR10MetaData@CFlipExBuffer$win32kbase.sys", 0x0, 0x0, false, 0x9ddc3dd45143533a)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SignalMaxGpuFence@CFlipExBuffer$win32kbase.sys", 0x0, 0x0, false, 0xc9529fe2193559a7)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif