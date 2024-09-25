#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Convert@CDXGISwapChainWrapper$dxgi.dll", 0x0, 0x0, false, 0x20d40664fed5af32)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Blt@CDXGISwapChainWrapper$dxgi.dll", 0x65b0c, 0x0, true, 0x450bcabbe72c53fb)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#endif