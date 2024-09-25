#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??0CETWEvent_IDXGISwapChain_GetContainingOutput@@QEAA@PEAXPEBQEAUIDXGIOutput@@@Z$dxgi.dll", 0x64b20, 0x0, true, 0xfa7689c646155560)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CETWEvent_IDXGISwapChain_GetContainingOutput@@QEAA@XZ$dxgi.dll", 0x64d18, 0x0, true, 0xb808c891589207b1)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif