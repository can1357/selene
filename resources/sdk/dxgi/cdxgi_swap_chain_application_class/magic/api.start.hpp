#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ApplySwapChainCreationStateFullScreen@CDXGISwapChainApplicationClass$dxgi.dll", 0x6fb10, 0x0, true, 0x8a5a06d42803b022)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1CDXGISwapChainApplicationClass@@QEAA@XZ$dxgi.dll", 0x5f05c, 0x0, true, 0xe48d151c0be4b6c6)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$FinalConstruct@CDXGISwapChainApplicationClass$dxgi.dll", 0x3090, 0x0, true, 0x1ce9922d93aa3961)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$GetControllingUnknown@CDXGISwapChainApplicationClass$dxgi.dll", 0x1fdf0, 0x0, true, 0xfc2e3e54011a566e)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#endif