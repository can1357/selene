#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CETWEvent_IDXGIFactory_CreateSwapChain@@QEAA@PEAXPEBUIUnknown@@PEBUDXGI_SWAP_CHAIN_DESC@@PEBQEAUIDXGISwapChain@@@Z$dxgi.dll", 0x5e988, 0x0, true, 0xe64dcba83dcedd2b)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CETWEvent_IDXGIFactory_CreateSwapChain@@QEAA@XZ$dxgi.dll", 0x5f068, 0x0, true, 0x4768b94acf9b1e53)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif