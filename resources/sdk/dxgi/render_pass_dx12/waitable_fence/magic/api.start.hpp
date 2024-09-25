#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Cleanup@WaitableFence@RenderPassDx12$dxgi.dll", 0x0, 0x0, false, 0xe4e824c91b210556)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Initialize@WaitableFence@RenderPassDx12$dxgi.dll", 0x0, 0x0, false, 0x8f50e4efab8dc9a6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SignalFence@WaitableFence@RenderPassDx12$dxgi.dll", 0x0, 0x0, false, 0xe4818dc2a4e8b70e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$WaitForFence@WaitableFence@RenderPassDx12$dxgi.dll", 0x0, 0x0, false, 0x7fa1c4321c0923d3)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif