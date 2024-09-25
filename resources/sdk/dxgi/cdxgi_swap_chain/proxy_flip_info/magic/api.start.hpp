#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetBufferDesc@ProxyFlipInfo@CDXGISwapChain$dxgi.dll", 0x6d1ec, 0x0, true, 0x9fd4b5922a2412e7)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$SetPrimaryDesc@ProxyFlipInfo@CDXGISwapChain$dxgi.dll", 0x6d614, 0x0, true, 0x50e715b2bd796d98)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif